#include <stdio.h>
#include <stdlib.h>

/*
    局部变量：只存在于变量存在的代码块
    全局变量：作用域整个程序有效；

    存储类型：
        auto        自动存储        只能用于块作用域的声明变量中 默认情况下为自动存储
        register    寄存器存储      只用于块作用域，请求速度块，对于循环次数较多的循环变量 反复使用可定义为次
        static      静态存储        载入程序时创建对象，程序结束对象消失
        extern      外部变量        作用域整个程序，生存期贯穿程序的开始到结束，声明变量定义在别处
*/

int whileCount = 0; //定义全局变量 用来记录while循环次数

//1、计算函数被调用多少次
int main()
{
    /*
    //1
    int count = 0;
    counter();  //1次调用 count+1
    counter();  //2次调用 count+2
    counter();  //3次调用 count+3
    count = counter();  //4次调用 count+4
    printf("被调用了%d次",count);
    */
    //2
    int value;  //自动变量 -- 循环次数
    register int i; //循环变量，设置为寄存器存储
    printf("请输入循环次数(按0退出循环)：");
    //scanf("%d",&value); 如果是数字 返回 1 ，否则 返回 0
    int result = scanf("%d",&value);
    printf("%d",result);
    //循环录入
    while(scanf("%d",&value)==1 && value > 0){
        whileCount++;
        for(i = value; i>=0; i--){

            counter(i);  //每次循环调用一次
        }
        printf("请输入循环次数(按0退出循环)：");



    }
    return 0;

}
