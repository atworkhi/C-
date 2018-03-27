#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

//定义 四家酒店的价钱 double类型
#define HOTEL1 879.0
#define HOTEL2 1249.0
#define HOTEL3 699.0
#define HOTEL4 1800.0
//折扣率
#define PRICE 0.95

//声明函数 菜单
int mean(void);

//声明函数 用户入住天数

int night(void);

//需要的费用 参数:入住天数、单价
double total(int,double);


#endif // HOTEL_H_INCLUDED
