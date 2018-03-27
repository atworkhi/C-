#include <stdio.h>
#include <stdlib.h>
//定义一个常量
#define N 5
//书写一个系统 用来进行数组的录入 排序 打印

//定义 录入 排序 打印 参数为数组

void input(double nums[]);
void sort(double nums[]);
void show(double nums[]);
//查找一个数字 看是否存在与数组中，如果存在则返回 下标，不存在 返回 -1
int findNums(double *, double); //两个参数 分别是要查找的数组，要查找的数字

int main()
{
    //求一个数组的长度 可用 sizeof(数组名)/sizeof(数组名[0])
    int test[]={1,2,3,4,5,6,7,8,9};
    printf("数组长度是：%d\n",sizeof(test)/sizeof(test[0]));

    double n;    //查找数字
    double nums[N];
    //录入
    input(nums);
    printf("排序前的数组：\n");
    show(nums);

    //排序
    sort(nums);
    printf("排序后的数组：\n");
    show(nums);


    //查找
    printf("请输入您要查找的数字：");
    scanf("\n%lf",&n);

    printf("您查找数字的小标为%d\n",findNums(nums,n));

    printf("Hello world!\n");
    return 0;
}

//录入函数
void input(double nums[]){
    int i;

    for(i=0; i<N; i++){
        printf("请输入您要录入的数组的第%d位:",i+1);
        //scanf("%lf",&nums[i]);
        scanf("%lf",(nums+i));
    }
}

//冒泡排序
void sort(double nums[]){
    int i,j;    //冒泡排序循环变量
    double temp;
    for(i=0; i<N-1;i++){
        for(j=0; j<N-i-1; j++){
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}
//显示打印
void show(double nums[]){
    int i;
    printf("-----------------------------------------------------\n");
    for(i=0; i<N; i++){
        //printf("%.2lf\t",nums[i]);
        printf("%.2lf\t",*(nums+i));
    }
    printf("\n-----------------------------------------------------\n");
}


int findNums(double nums[], double findNum){
    int i ;
    int numIndex = -1;
    for(i=0; i<N; i++){
        // findNum == *(nums + i)
        if(findNum == nums[i]){
            numIndex = i;
            break;
        }
    }

    return numIndex;
}
