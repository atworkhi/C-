#include <stdio.h>
#include <stdlib.h>
#define N 5     //宏定义
/*
    冒泡排序：
    原理：两两比较(大小交换位置)
    多轮进行比较
        20 9 90 12 1
    第一轮：
        1：20 9 90 12 1
        2：20 90 9 12 1
        3：20 90 12 9 1
        4：20 90 12 9 1
    第二轮(最后一位不用比较)：
        1：90 20 12 9 1
        2：90 20 12 9 1
        3：90 20 12 9 1
    第三轮（最后两位不用比较）
        1：90 20 12 9 1
        2：90 20 12 9 1
    第四轮(最后四位不用进行比较)
        1：90 20 12 9 1


*/

int main()
{
    int i,j;     //循环变量
    int nums[]={1,10,6,30,8};   //定义数组
    int temp;   //用来存放交换值
    //外层循环判断轮
    for(i=0;i<N-1;i++){
        //内层循环判断比较次数
        for(j=0;j<N-i-1;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    printf("冒泡排序后的结果是：\n");
    for(i=0;i<N;i++){
        printf("%d\t",nums[i]);
    }
    printf("Hello world!\n");
    return 0;
}
