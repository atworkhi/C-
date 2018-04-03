#ifndef BACKPACK_H_INCLUDED
#define BACKPACK_H_INCLUDED

//商品结构体
typedef struct _prop{
    int id;         //编号
    char name[50];  //商品名称
    double price;   //价格
    int stock;      //库存，如果背包存在，则叠加，如果不存在，新增
    char desc[200]; //描述
}Prop;

//背包
typedef struct _bag{
    int playId;     //玩家编号
    int count;      //当前背包道具数量
    int max;        //背包格数
    Prop prop[8];      //当前背包中的道具
}Bag;


//玩家
typedef struct _paly{
    int id;     //id
    char name[50];      //昵称
    char pass[50];      //密码
    Bag  bag;           //背包
    double gold;        //金币
    double sysee;       //元宝 充值
}Player;
//初始化数据
void Init();

//声明函数，用来显示道具
void ShowProps();
//声明函数，用来显示玩家
void ShowPlays();

//玩家交易  交易的玩家(一定用指针方式) 与商品作为参数
void Trade(Player *p,int propId);
#endif // BACKPACK_H_INCLUDED
