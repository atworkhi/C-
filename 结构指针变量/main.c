#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include "demo.h"
#include "bank.h"
/*
//结构指针

//嵌套
struct Martial{     //门派结构体
    int id;         //id
    char name[50];  //名称
    char desc[100]; //简介
    int count;      //人数
    int type;       //类型 1.名门正派，2.中立、3.邪门
};

struct Player{      //玩家结构体
    int id;         //id
    char name[50];  //姓名
    char sex;       //性别
    struct Martial martial; //门派信息
};

//实例： 动态录入英雄属性
//新建头文件 与 与源码文件
*/
//引用外部变量
//extern User users[10];
int main()
{
    double p;
    /*
    //参数传递
    //方式1:
    Bank user={"星星银行","穷人",5000.00,2000.00};
    p = pay1(user.limit,user1.black);
    */
    /*
    //方式2：
    Bank user={"星星银行","穷人",5000.00,2000.00};
    p = pay2(user);
    printf("还款方式：%.2lf",p);
    */
    //方式3
    BankPoint bank = {"招商银行","陌生人",5000.00,2111.00};
    //由于是指针，用 &符号
    p = pay3(&bank);
    printf("还款方式:%.2lf\n",p);
    printf("默认银行：%s",bank.name);
    /*
    Input();
    Show();
    */

    //InputHero();
    /*
    //初始化
    struct Player p1 ={1,"指针结构",'f',{1,"C程序设计",500,2}};
    //指针指向结构体的初始化
    struct Player *ptr_p1 = &p1;
    //使用指针访问方式1： 一定注意把指针包含在()中 并有*
    printf("%s\t %s\n",(*ptr_p1).name, (*ptr_p1).martial.name);
    //使用指针访问方式2：用 -> 链接
    printf("%s\t %s\n",ptr_p1->name, ptr_p1->martial.name);
    */
    return 0;
}
