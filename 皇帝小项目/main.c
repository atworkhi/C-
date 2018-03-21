#include <stdio.h>
//播放音频 还需要在链接中添加 “-lwinmm”
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
#include <string.h> //支持字符串操作
//常量
#define MAX 6

int main()
{


    //文件类型只能是波形文件 只能为wav
    //PlaySound(TEXT("sounds\\1.wav"),NULL,SND_FILENAME | SND_ALIAS | SND_LOOP);

    int i , j, temp;  //循环变量
    int count = 5; //默认的妃子数
    char ename[50];   //定义年号
    int choise;       //选项
    int searchIndex = -1;   //查找打入冷宫的
    char tempName[20];  //翻牌的临时变量
    //选妃的数组 6是有6个嫔妃，名字是20长度
    char names[MAX][20]={"貂蝉","杨贵妃","赵飞燕","西施","小乔"};     //初始化五个
    //级别数组
    char levelNames[5][10]={"才人","贵人","嫔妃","贵妃","皇后"};
    //用来存放每个妃子的级别 貂蝉--贵人 -1用来占位 用来添加一个
    int levels[MAX]={1,3,2,0,0,-1};
    //用来对应好感度 初始为100
    int loves[MAX]={100,100,100,100,100,-1};

    printf("后宫\n");
    printf("姓名\t级别\t好感度\n");
    for(i=0;i<count;i++){
        printf("%s\t%s\t%d\n",names[i], levelNames[levels[i]], loves[i]);
    }
    printf("-----------------------------------------\n");

    printf("皇上万岁，请给您自己起一个年号:");
    //得到年号 ，注意不用 & 因为是char类型
    scanf("%s",ename);
    printf("%s驾到，吾皇万岁！\n",ename);

    printf("1、新皇登基，皇帝选妃\t\t(增加)\n");
    printf("2、皇帝翻牌;宠幸爱妃\t\t(修改)\n");
    printf("3、皇帝大怒，要将爱妃打入冷宫\t\t(删除)\n");
    printf("4、皇帝要单独带爱妃进入小树林 嘿嘿嘿\n");
    printf("%s 请做出您的选择:\n",ename);
    scanf("%d",&choise);
    switch(choise){
        case 1: //增加
            if(count<MAX){
                printf("请输入您选妃的名字：");
                scanf("%s",names[count]);
                //将数组最后一个初始化
                levels[count]=0;    //级别
                loves[count]=100;   //好感度
                count++;
            }else{
                printf("后宫已经人满了，住不下了\n添加失败\n");
            }

            break;
        case 2: //查找 --修改
            //好感度+20,级别+1 其他人好感度减10
            //查找
            printf("请输入您要宠幸的妃子名称:");
            scanf("%s",tempName);
            //字符串查找strcmp  引入<string.h>
            //strcmp =0 字符串相等  1 前一个大于后一个 -1 前一个小于后一个
            for(i = 0; i < count; i++){
                if(strcmp(tempName,names[i]) == 0){
                    searchIndex = i;
                }
            }
            if(searchIndex==-1){
                printf("皇上是不是想要选妃了，后宫暂时还没有这个妃子\n");
            }else{
                for(i = 0; i < count; i++){
                    //如果发现这个妃子
                    if(strcmp(tempName,names[i]) == 0){
                        loves[i] += 20;
                        //级别不能超过4
                        levels[i] = levels[i] > 4 ? 4 : levels[i]+1;
                    }else
                        loves[i] -= 10;
                }
            }

            break;
        case 3: //删除一个 ，后面一个放到前面

            printf("皇上,哪个妃子惹您了，需要打入冷宫！\n");

            scanf("%s",tempName);

            //循环查找
            for(i = 0; i < count; i++){
                if(strcmp(tempName,names[i]) == 0){
                    //记录下标
                    searchIndex = i;
                    break;
                }
            }
            //初始值指没有找到
            if(-1 == searchIndex){
                printf("皇上可能迷糊了，压根都没这个嫔妃！虚惊一场\n");
            }else{
                for(i=searchIndex;i<count-1;i++){
                        //需要strcpy函数 实现数组的赋值
                        strcpy(names[i],names[i+1]);
                        loves[i]=loves[i+1];
                        loves[i]=loves[i+1];
                }
                count--;
            }
            break;
        case 4:
            printf("44444444444\n");
            break;
        default:
            printf("%s,还请慎重选择啊！！！！\n",ename);
    }

    //打印结果按照级别进行冒泡排序
    for(i=0;i<count-1;i++){

        for (j = 0; j< count-i-1; j++) {

            if (levels[j] <levels[j+1]){
                    //交换姓名 级别 好感度
                temp=levels[j];
                levels[j]=levels[j+1];
                levels[j+1]=temp;

                temp= loves[j];
                loves[j]=loves[j+1];
                loves[j+1]=temp;

                strcpy(tempName,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempName);
            }
        }
    }
    printf("-----------------------------------------\n");
    printf("操作完之后的结果：\n");
    printf("姓名\t级别\t好感度\n");
    for(i=0;i<count;i++){
        printf("%s\t%s\t%d\n",names[i], levelNames[levels[i]], loves[i]);
    }
    printf("-----------------------------------------\n");




    return 0;
}
