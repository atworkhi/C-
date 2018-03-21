#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
//内置函数


/*
<math.h >中的算术函数

double sqrt(double x) 计算x的平方根

double pow(double x,double y); 计算x的y次幂

double ceil(double x) 求不小于x的最小整数

double floor(double x) 求不大于x的最大整数

<ctype.h>中的函数

int toupper(int x)  如果x为小写字母 则返回对应的大写字母

int tolower(int x) 如果x为大写字母 则返回对应的小写字母

int isupper(x) 判断是否为大写字母 Ascii
int islower(x) 判断是否为小写字母 Ascii

int isalpha(x) 判断字符是否为字母 ASCII
int isdigit(x) 判断字符是否为数字 需要用“ ” 不然默认为Ascii

<stdlib.h>中的函数

int rand() 产生一个随机数

void exit(int retval) 终止程序
*/

//函数

int main()
{
    //calloc 动态分陪内纯，初始化了数组
    //malloc 动态分配内存
    int i; //循环变量
    int * nums; //定义一个指针
    //为前面的指针动态分配了20字节的空间 也就是5个int（一个int 4个空间）
    //nums =(int *)malloc(sizeof(int)*5); //nums[5]

    nums=(int *)calloc(5,sizeof(int));
   // for(i=0;i<5;i++){
   //    printf("请为第%d号元素赋值：",i+1);
   //     scanf("%d",nums+i);
   //}
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d\t",*(nums+i));
    }
    //用malloc分配完空间后 要释放内存
    free(nums);
    //指针指向空
    nums = NULL;
    /*
    //stdlib.h
    //随机数 需要时间种子
    srand((unsigned)time(NULL));
    printf("%d",rand());

    //exit(0) // 0代表正常退出程序
    //system中可以输入一段dos指令

        //颜色属性由两个十六进制数字决定。第一个为前景色，第二个背景色
        //黑色-0 蓝色-1 绿色-2 湖蓝色-3
        //红色-4 紫色-5 黄色-6 白色-7
        //灰色-8 淡蓝色-9 淡绿色-A 淡红色-C
        //淡紫色-D 淡黄色-E 亮白色-C


        //关机命令
        //shutdown \s \t 180 //180s后关机
        //shutdown \a 取消关机

    system("color 3E");
    */
    /*
    //math.h
    //ceil 向上取值 floor 向下取值 如果为负数 则相反
     printf("%.2lf\n",ceil(98.1));
     printf("%.2lf\n",floor(98.9));
     //绝对值
     printf("%d\n",abs(-18));
     //求平方根
     printf("%.2lf\n",sqrt(9));
     //求x的y次幂
     printf("%.2lf\n",pow(2,3));
     */
    /*
    //ctype.h
    //在c语言中0代表是假，非0为真
    printf("%d \n",isupper(80)); //ASCII P 真
    printf("%d \n",isupper(97)); //假
    printf("%d \n",isupper("B")); //假


    printf("---------------------------\n");
    printf("%d \n",islower(97)); //ASCII 真
    printf("%d \n",islower(80));   //假
    printf("%d \n",islower("a"));  //假
    printf("------------isalpha---------------\n");
    printf("%d\n",isalpha(97)); //是 'a' 真

    printf("%d\n",isalpha(47)); //ASCII / 假
    printf("---------------------------\n");
    //ascii 48-57
    printf("%d \n",isdigit(48));
    printf("%d \n",isdigit(97));
    */

    /*
    //小案例 把用户输入的金额转成大写的
    int money ;  //用户输入的钱
    int moneys[10]; //定义一个数组 循环放入取出的值
    int len=0;   //长度 、循环变量
    int i =0;
    char upmoney[10][4]={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"}; //大写字符

    printf("请输入您的金额:");
    scanf("%d",&money);
    while(money != 0){
        moneys[i] = money%10;
        money/=10;  //去掉最后一位
        i++; //取出放入数组
        len++;//算长度

    }
    for(i=0; i<len; i++){

        printf("%d ---- %s\n",moneys[i],upmoney[moneys[i]]);
    }
    */
    //内置函数

    return 0;
}
