//
// Created by hanxx on 2018/4/3.
//

#ifndef JIANGHU_V0_1_GAME_H
#define JIANGHU_V0_1_GAME_H

/**
 * 文件名： Game.h
 * 描述：  用来定义游戏的一些核心结构和函数
 *
 * **/
#include <stdio.h>
#include <string.h>
#include <windows.h>

/*
 *  游戏 结构类型 定义
 *  玩家、地图、装备、怪物
 * */
//游戏道具类型枚举
typedef enum _propType{
    Weapon, //武器
    Armor,  //道具
    Con,    //消耗品
    Card,   //卡片
    Frag,   //碎片
}PropType;

/*游戏道具 - 武器、防具、消耗品、卡牌*/
typedef struct _prop{
    int id;         //道具编号
    char name[50];  //道具名称
    int leve;       //等级
    int stock;      //库存
    double price;   //单价
    PropType type;  //类型
    union {         //属性用联合 多选一
        int minattack; //武器对应攻击
        int mindefence;   //防具 防御力
        int minpower;      //消耗品对应的增加值
    };
    union {         //属性用联合 多选一
        int maxattack; //武器对应攻击
        int maxdefence;   //防具 防御力
        int maxpower;      //消耗品对应的增加值
    };
    char desc[200];   //功能描述
}Prop;

/*地图*/
typedef struct _map{
    int id; //地图编号
    char name[50];  //地图名称
    int minLevel;   //玩家进入的最低等级
    COORD coord;    //地图坐标 x y windous自带结构体
    char desc[200]; //地图介绍
}Map;

/*函数声明*/
void Init();    //初始化函数
void Show();    //打印测试

#endif //JIANGHU_V0_1_GAME_H
