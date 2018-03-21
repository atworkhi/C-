#include <stdio.h>
#include <stdlib.h>
//define是指 宏定义,不用定义数据类型，根据调用决定数据类型
#define N 5
int main()
{
    /*
        定义一个数组 8，4，2，1，23，344，12
        1.循环输出数组值
        2.求数组的和与平均值
        3.猜数字：输入一个数判断是否存在与数组中
    */
    int i;  //循环变量
    int sum;    //求和
    double avg; //平均数
    int find;   //判断是否存在
    int inuser; //用户输入的数
    int nums[]={8, 4, 2, 1, 23, 344, 12};
    //循环输出
    for(i=0;i<7;i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    //求和与平均数
    for(i=0;i<7;i++){
        sum+=nums[i];
    }
    avg=sum / 7.0;
    printf("数组的和：%d;平均数：%.2lf\n",sum,avg);
    //用户输入一个值 判断是否存在与数组中
    printf("请输入一个数字：");
    scanf("%d",&inuser);
    for(i=0;i<7;i++){
        if(inuser==nums[i]){

            find=1;
            break;
        }else{
            find=2;
        }
    }
    if(find=1){
        printf("数字%d存在本数组中\n",inuser);
    }else{
        printf("数字%d不存在本数组中\n",inuser);
    }

    /*
        一维数组测试：
        定义一个长度为5的数组，循环输入成绩，并打印成绩！
    */
    /*
    int i;  //循环变量
    double score[N];   //成绩 定义成一个数组
    for(i=0;i<N;i++){
        printf("请输入%d号同学的成绩:",i+1);
        scanf("%lf",&score[i]);
    }

    for(i=0;i<N;i++){
        printf("%d号同学的成绩为：%.2lf\n",i+1,score[i]);
    }
    */
    return 0;
}
