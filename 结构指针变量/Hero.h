#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/**/
//定义结构体
//typedef struct 简化结构体

//职业
typedef struct _job{    //职业
    int id;
    char *name;
    char *desc;
}Job;

//能力
typedef struct _abillity{
    int id;
    char *name;     //名称
    char *info;     //说明

}Abillity;

//时间
typedef struct _date{
    int year;
    int month;
    int day;
}Date;

//英雄
typedef struct _hero{
    int id;
    char *name;
    char sex;
    Job job;            //职业  嵌套
    double hp;
    Abillity abillity;  //能力
    Date date;          //发布时间

}Hero;

//定义输入英雄的函数
void InputHero();

//输出英雄函数
void ShowHero();


#endif // HERO_H_INCLUDED
