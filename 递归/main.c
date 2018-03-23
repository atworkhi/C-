#include <stdio.h>
#include <stdlib.h>

/*
    递归 就是函数本身调用本身，循环
*/

//案例2  斐波那契函数 1 1 2 3 5 8 13 。。。。
//正整数
unsigned long fun1(unsigned n);

int main(){

    printf("%d\t",fun1(7));

    return 0;
}

unsigned long fun1(unsigned n){
    if (n > 2){
        return fun1(n-1)+fun1(n-2);
    }else{
        return 1;
    }
}
/*
//案例1： 求某个数的阶乘
int factorial(int); //声明函数

int main()
{
    //调用函数
    int avg =factorial(4);
    printf("4的阶乘为：%d\n",avg);
    printf("Hello world!\n");
    return 0;
}

//函数函数
int factorial(int n){
    int avg;
    //循环退出条件
    if(n == 1){
        return 1;
    }

    avg=n*factorial(n-1);
}
*/
