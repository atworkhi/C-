//
//  main.c
//  循环
//
//  Created by 韩星星 on 2018/3/10.
//  Copyright © 2018年 韩星星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //while 循环
    int i=1;
    while (i<=10) {
        printf("第%d遍\n",i);
        i++;
    }
    
    /*
    //switch case
    //输入一个月份，并打印天数
    int month;  //输入月份
    printf("请输入月份：");
    scanf("%d",&month);
    switch (month) {
        case 1:
            printf("1月份有31天\n");
            break;
        case 2:
            printf("2月份有28天\n");
            break;
        case 3:
            printf("3月份有31天\n");
            break;
        case 4:
            printf("4月份有30天\n");
            break;
        default:
            printf("当前程序只允许计算1-4月份！！！\n");
            break;
    }
    */
    /*
    //if 条件
    double price;
    printf("请输入您心中的价钱：");
    scanf("%lf",&price);
    if (price>10000)
    {
        printf("这个可是个好价钱！！！\n");
    }
    else if (price>=1000 && price<=10000)
    {
        printf("这个价钱可不便宜！！！\n");
    }
    else if (price>=100 && price<1000)
    {
        printf("不行不行太亏了！！！\n");
    }
    else
    {
        printf("你爸爸都不卖给你！！！\n");
    }
    */
    return 0;
}
