#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

//结构体的参数传递

typedef struct _bank{
    char name[50];  //银行名称
    char user[50];  //用户名
    double limit;   //额度
    double black;   //剩余额度
}Bank;

typedef struct _bankP{
    char *name;  //银行名称(指针)
    char *user;  //用户名
    double limit;   //额度
    double black;   //剩余额度
}BankPoint;
//参数传递1 直接传递
double pay1(double,double);
//参数传递2 用结构体类型
double pay2(Bank);
//参数传递3 指针类型
double pay3(const BankPoint *bp);


#endif // BANK_H_INCLUDED
