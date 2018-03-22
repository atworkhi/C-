//
//  main.c
//  游戏1
//  拳皇游戏 每次攻击随机减血5-15
//  Created by 韩星星 on 2018/3/11.
//  Copyright © 2018年 韩星星. All rights reserved.
//

#include <stdio.h>
//引入内置库
#include <stdlib.h>
//引入time头文件实现随机数每次都不一样
#include <time.h>
//sleep函数 windows下为 windows.h
//#include <unistd.h>
#include <window.h>
int main(int argc, const char * argv[]) {
    //生成随机数 srand用作时间种，使每次产生的随机数不一样
    srand( (unsigned)time( NULL ) );
    
    //血量
    int hp1=100 , hp2=100;
    //计算回合数
    int i=0;
    while (hp1>0 && hp2>0)
    {
        //随机数rand函数 如果 %11 余数范围为0-10 若使范围便成为 5-15 只需加5
        //1的攻击力随机数
        int attr1=rand() % 11 + 5;
        //2的攻击随机数
        int attr2=rand() % 11 + 5;
        
        //1攻击 hp2的剩余血量
        hp2 -= attr1;
        //2攻击 hp1的剩余血量
        hp1 -= attr2;
        printf("*********************************\n");
        printf("第%d回合\n",i+1);
        printf("1号攻击了2号，造成 %d点伤害，2号剩余%d血量\n",attr1,hp2);
        if(hp2<=0){
            printf("1号 KO 了2号选手\n");
            break;
        }
        printf("2号攻击了1号，造成 %d点伤害，1号剩余%d血量\n",attr2,hp1);
        if(hp1<=0){
            printf("2号 KO 了1号选手\n");
            break;
        }
        printf("*********************************\n");
        i++;
        //休息时间 2s
        sleep(2);
    }
    
    
    return 0;
}
