#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    函数规则
    returnType funName(parm1;parm2....)
*/

//实例demo
//1.输入一个数字，查找数组，如果可以找到返回这个数字的下标，如果没有则返回 -1
int searchList();
//2. 输入数字 进行冒泡排序并输出
//C语言不允许返回数组，但是可以用指针指向数组
int *listSort(int n);
//3.用户输入密码。如果输入正确返回正确的密码，如果输入错误，则提示输入错误并重输入
int passworld(int n);

int main(){


    int searchIndex = searchList();
    printf("查找出的数组下标是: %d\n",searchIndex);  //案例1

    int i;  //循环变量
    int * prt_list = listSort(5);
    for(i = 0; i < 5; i++){
        printf("%d\t",*(prt_list + i));
    }
    //free 释放
    free(prt_list);
    printf("\n");       //案例2

    int pwd;
    pwd = passworld(123456);
    printf("密码正确：%d",pwd);         //案例3

    return 0;
}


int searchList(){
    int i, searchNum, searchIndex=-1;   //循环变量、查找的数、下标
    int nums[] ={22,33,44,55};    //定义一个数组
    printf("请输入您要查找的数字:");
    scanf("%d",&searchNum);
    //循环查找
    for(i=0; i < 4; i++){
        //* (nums+i) 用指针表示 等同 nums[i]
        if(searchNum == *(nums+i) ){

            searchIndex = i;
            break;
        }
    }
    return searchIndex;
}

//返回数组
int * listSort(int n){
    int i,j;    //循环变量
    //malloc数组建立在heap堆上，调用完函数还在，返回了那个堆上数组的首地址
    int* nums = (int *)malloc(sizeof(int)*n);
    int num ,temp;
    //循环输入数组
    for( i=0; i < n;i++ ){
        printf("请输入您添加的数字：");
        scanf("%d",&num);
        nums[i]=num;    //赋值
    }
    //查看输入的数组
    printf("排序前的结果\n");
    for(i = 0; i < n; i++){
        printf("%d\t", nums[i]);
    }
    printf("\n");
    //冒泡排序
    for(i=0; i<n-1;i++){  //外层轮控制轮
        for(j=0;j<n-i-1;j++){ // 内层控制比较个数
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("排序后的结果\n");
    for(i = 0; i < 5; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    return nums;
}

int passworld(int n){
    int password;
    //提示输入密码
    printf("请输入您的6位数字密码:");
    scanf("%d",&password);

    //判断
   while(password != n){
    printf("密码错误,请重新输入:");
    scanf("%d",&password);
   }
   return password;
}
/*
//计算长方形和园的面积
//函数的定义
void calcCircle();  //圆的面积
void calcCuboid();  //长方形的面积
//带返回值
int evenSum();  //计算1-100的偶数和

//函数的实现
void calcCircle(){
    double radial;  //半径
    double area;    //面积
    printf("请输入您要计算的圆的半径：");
    scanf("%lf",&radial);
    area = 3.14 * (pow(radial,2));
    printf("圆的面积是%.2lf\n",area);
}

void calcCuboid(){
    double weight, height;  //长宽
    double area;    //面积
    printf("请输入长和宽的值：");
    scanf("%lf %lf",&weight,&height);
    area = weight * height;
    printf("长方形的面积是%.2lf\n",area);
}

int evenSum(){
    int i, sum=0;   //循环变量与求和结果
    for(i=1;i<=100;i++){
        if(i%2 == 0){
            sum+=i;
        }
    }
    return sum;
}

//main里调用函数
int main()
{

    int sum =evenSum(); //调用函数
    printf("1-100偶数和是%d\n",sum);

    calcCuboid();   //调用求长方体的面积
    calcCircle();   //调用圆的面积
    printf("Hello world!\n");
    return 0;
}
*/
