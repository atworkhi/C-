//
//  main.c
//  DataType
//  数据类型
//  Created by 韩星星 on 2018/3/10.
//  Copyright © 2018年 韩星星. All rights reserved.
//  整形 ：int short long
//  浮点 ：float double
//  字符 ：char
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //定义一个数据类型
    int num1=10;
    int num2=8;
    //拼接整数用 %d
    printf("这是第一个整数：%d，这是第二个整数：%d\n",num1,num2);
    
    //拼接浮点型 用%f %.2表示精确到两位小数
    float weight=30.00f;
    float height=40.00f;
    float s=weight*height;
    printf("长方形的面积是：%.2f\n",s);
    
    //doblue类型 占位符 %lf
    double radius=3.50;
    double area=radius*radius*3.141592653;
    printf("圆的面积是：%lf\n",area);
    
    //char类型 占位8位一个字节 占位符 %c 单个字符  ascii码
    char ch='A';
    printf("这是我要打印的字符：%c\n",ch);
    printf("这是打印字符的ASCII码：%d\n",ch);
    //大写字母转小写字母+32 小写字母转大写字母-32 空格指32
    char asc='m';
    //转成大写
    printf("小写转大写：%c\n",asc-' ');
    
    //字符串占位符 %s %%输出一个%
    
    //转义字符 \a 蜂鸣警报 \r回车
    printf("\a");
    printf("\a");
    
    /*
     求一件武器的实际伤害 =武器最大伤害*(玩家力量+100)/100
     假如武器的最大伤害256 让玩家输入力量，算出实际伤害
    */
    //定义实际伤害 double
    double facePower;
    //定义一个玩家力量 int
    int strength;
    //定义最大伤害 double
    double maxPower=256;
    
    printf("请输入当前玩家的力量：");
    //scanf 输入
    //& 取地址 并赋值
    scanf("%d",&strength);
    
    //用公式
    facePower = maxPower * (strength + 100) / 100;
    printf("武器实际伤害：%.2lf\n",facePower);
    return (0);
}
