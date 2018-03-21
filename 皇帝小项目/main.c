#include <stdio.h>
#include <string.h>

#define MAX 6   //定义宏观变量
/*
 * 皇帝的养成游戏
 * */
int main() {

    int i, j, temp;  //循环变量 临时变量
    int count = 5;  //妃子个数
    char empName[20];  //皇帝姓名
    int choise;     //选择 1234
    int searchIndex = -1;    //定义一个参数，用来判断是否存在
    char tempName[20];  //临时变量


    //定义后宫 默认5个 可选一个
    char names[MAX][20] = {"赵飞燕", "小乔", "西施", "貂蝉", "杨玉环"}; //名讳
    char levelNames[5][10] = {"才人", "贵人", "嫔妃", "贵妃", "皇后"};   //等级
    int levels[MAX] = {2, 0, 1, 3, 3, -1};   //names对应的等级 -1 为预留位置
    int loves[MAX] = {100, 100, 100, 100, 100, -1};    //好感度 默认初始化为100

    printf("==========================================\n");
    printf("%-10s\t\t%-10s\t\t%-10s\n", "名讳", "称谓", "好感度");
    for (i = 0; i < count; i++) {
        printf("%-10s\t\t%-10s\t\t%-10d\n", names[i], levelNames[levels[i]], loves[i]);
    }
    printf("==========================================\n");

    printf("先皇驾崩！新皇登基！请为您定一个年号：\n");
    //注意：这里因为是字符串，所以不用 &
    scanf("%s", empName);
    printf("%s驾到，万岁万岁万万岁\n", empName);
    for (int day = 0; day < 10; day++) {
        printf("第%d天\n",day+1);
        printf("请皇上进行选择操作：\n");
        printf("1.新皇登基！下旨选妃：\n");
        printf("2.皇帝翻牌，宠幸妃子：\n");
        printf("3.皇帝生气，打入冷宫：\n");
        printf("4.皇帝想带妃子去小树林：\n");
        scanf("%d", &choise);    //皇帝选择
        switch (choise) {
            case 1:
                //先判断妃子的个数是否已经满了
                if (count < MAX) {
                    printf("陛下，您决定选妃了吗，如果决定了，请输入您想选的妃子名号：\n");
                    scanf("%s", names[count]);
                    //所有数组初始化
                    levels[count] = 0; //等级
                    loves[count] = 100; //好感度
                    count++;
                    //
                } else {
                    printf("陛下，后宫住满了，注意节制啊！");
                }
                break;
            case 2: //字符串查找 引入 string.h
                printf("陛下，请问您·今晚准备临幸哪位妃子：\n");
                scanf("%s", tempName);
                //字符串查找  strcmp  如果=0 相等， =1 前一个字符串>后一个 =-1 前一个字符串<后一个
                for (int i = 0; i < count; i++) {
                    if (strcmp(tempName, names[i]) == 0) {
                        searchIndex = i;
                        break;
                    }
                }
                if (searchIndex == -1) {
                    printf("陛下！您是不想想多了，后宫没有这个妃子啊\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        if (strcmp(tempName, names[i]) == 0) {
                            loves[i] += 20; //好感度+20
                            levels[i] = levels[i] >= 4 ? 4 : levels[i] + 1; //等级是不是大于最大值，如果是 保持 或者+1

                        } else {
                            loves[i] -= 10;  //未被选中的好感度都减1011
                        }
                    }
                    searchIndex = -1; //恢复默认值，方便下面调用
                }

                break;
            case 3: //删除数组

                printf("陛下！哪位爱妃惹您了，需要打入冷宫：\n");

                scanf("%s", tempName);

                for (int i = 0; i < count; i++) {
                    if (strcmp(tempName, names[i]) == 0) {
                        searchIndex = i;
                        break;
                    }
                }

                if (searchIndex == -1) {
                    printf("皇上可能迷糊了，压根都没这个嫔妃！虚惊一场\n");
                } else {
                    for (i = searchIndex; i < count - 1; i++) {
                        //需要strcpy函数 实现数组的赋值
                        strcpy(names[i], names[i + 1]);
                        loves[i] = loves[i + 1];
                        loves[i] = loves[i + 1];
                    }
                    searchIndex = -1; //恢复默认值，方便下面调用
                    count--;
                }
                break;
            case 4:
                printf("444");
                break;
            default:
                printf("皇上！请慎重啊，您可没有那么玩的\n");
                break;
        }

        //打印结果按照级别进行冒泡排序
        for (i = 0; i < count - 1; i++) {
            for (j = 0; j < count - i - 1; j++) {
                if (levels[j] < levels[j + 1]) {
                    //交换姓名 级别 好感度
                    temp = levels[j];
                    levels[j] = levels[j + 1];
                    levels[j + 1] = temp;

                    temp = loves[j];
                    loves[j] = loves[j + 1];
                    loves[j + 1] = temp;

                    strcpy(tempName, names[j]);
                    strcpy(names[j], names[j + 1]);
                    strcpy(names[j + 1], tempName);
                }
            }
        }

        printf("==========================================\n");
        printf("%-10s\t\t%-10s\t\t%-10s\n", "名讳", "称谓", "好感度");
        for (i = 0; i < count; i++) {
            printf("%-10s\t\t%-10s\t\t%-10d\n", names[i], levelNames[levels[i]], loves[i]);
        }
        printf("==========================================\n");
    }


    return 0;
}