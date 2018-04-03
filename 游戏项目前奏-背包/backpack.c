#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "backpack.h"

//初始化道具指针
Prop *prop;
Player *player;

int propsCount = 0;
int playersCount =0;
//初始化
void Init(){
    static Prop props[]={
        {1,"双倍经验",2000,10,"一小时之内双倍经验"},
        {2,"疲劳药",1000,7,"使用后增加您的疲劳值15点"},
        {3,"升级卡",9000,9,"直升一级，并完成主线任务"},
        {4,"史诗武器",11111,2,"使用后将获得一件史诗装备"},
        {5,"随机道具",5000,10,"随机获取一件道具"}
    };

prop =props;    //定义指针指向
propsCount =5;
    static Player players[]={
        {1,"毛毛虫","123456",.gold=50000,.sysee=0,.bag.max=8},
        {2,"吃鸡吃鸡","123456",.gold=150000,.sysee=0,.bag.max=8},
        {3,"小星星","123456",.gold=100000,.sysee=0,.bag.max=8}
    };

player = players;
playersCount=3;

}

void ShowProps(){
    if(prop ==NULL){
        return;
    }
    int i;
    printf("%-5s%-14s%-9s%-7s%-20s\n","编号","名称","单价","库存","描述");
    for(i=0; i<propsCount;i++){
        printf("%-5d%-14s%-9.2lf%-7d%-20s\n",prop[i].id,prop[i].name,prop[i].price,prop[i].stock,prop[i].desc);
    }

}


void ShowPlays(){
    int i,j;
    if(player ==NULL){
        return;
    }

    printf("%-5s%-14s%-14s%-11s%-11s\n","用户ID","昵称","密码","金币","元宝");
    for(i=0; i<playersCount;i++){
        printf("%-5d%-14s%-14s%-11.2lf%-11.2lf\n",player[i].id,player[i].name,player[i].pass,player[i].gold,player[i].sysee);

        printf("\n");
    }
}
//交易，玩家要用指针 由于需要减价钱
void Trade(Player *p,int propId){
    int i;
    //验证：商品库存、余额、背包空间
    Prop *tradeProp;    //需要购买的商品指针

    for(i=0; i<propsCount;i++){
        //找到商品
        if(propId == prop[i].id){
            //第I个元素的地址
            tradeProp = &prop[i];   //tradeProp = prop+i;
            break;
        }
    }
    //指针访问元素用 "->"
    if(tradeProp->stock <=0){
        printf("库存不足！！！\n");
        return;
    }
    if(p->gold < tradeProp->price){
        printf("您的余额不足，请充值！！\n");
        return;
    }

    if(p->bag.count >= p->bag.max){
        printf("背包已满；交易失败!!\n");
        return;
    }
    //满足条件 交易
    //1.商品-1；
    tradeProp->stock--;
    //2.金币-价钱;
    p->gold -= tradeProp->price;
    //3.背包增加
    //判断背包是否有此商品，如果没有 添加，如果存在此商品 +1
    for(i=0; i< p->bag.count ; i++){
        //如果背包存在这个商品，只需要把这个商品++
        if(propId == p->bag.prop[i].id){
            p->bag.prop[i].stock++;
            break;
        }else{
          //添加商品ID到背包的对应格子
            p->bag.prop[p->bag.count].id = tradeProp->id;
            //找到商品价钱赋值到 背包的商品价钱
            p->bag.prop[p->bag.count].price = tradeProp->price;
            //第一次买，背包的库存为1
            p->bag.prop[p->bag.count].stock = 1;
            //商品名称，需要用字符串复制
            strcpy(p->bag.prop[p->bag.count].name,tradeProp->name);
            //商品描述
            strcpy(p->bag.prop[p->bag.count].desc,tradeProp->desc);
            //交易成功 背包+1;
            p->bag.count++;
        }
    }
}
