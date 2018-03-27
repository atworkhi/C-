#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

/*
    显示酒店列表、用户选择、入住天数 、计算价钱

    声明头文件.h 用来声明函数 与存放 宏定义
*/

//引用外部变量 因为在其他文件中，所以用关键字 extern
extern char hotelList[4][50];
int main()
{
    int choise; //选择
    int nights; //天数
    double totals;  //价钱

    while(1){
        choise = mean();
        printf("**********************************\n");
        if(choise>0 && choise<5){
            printf("您选择的酒店是：\n");
            printf("%d、%s",choise, hotelList[choise-1]);
            printf("\n**********************************\n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            nights = night();
            printf("您将入住%s %d天",hotelList[choise-1],nights);
            printf("\n++++++++++++++++++++++++++++++++++++++\n");
            switch (choise){
                case 1:
                    totals = total(nights,HOTEL1);
                    break;
                case 2:
                    totals = total(nights,HOTEL2);
                    break;
                case 3:
                    totals = total(nights,HOTEL3);
                    break;
                case 4:
                    totals = total(nights,HOTEL4);
                    break;
                }
            printf("#######################################\n");
            printf("您将入住%s %d天,一共花费 ￥%.2lf",hotelList[choise-1],nights,totals);
            printf("\n#######################################\n");

        }else if(choise == 5){
            printf("欢迎再次使用本系统！再见！！！\n");
            break;
        }
    }
    return 0;
}
