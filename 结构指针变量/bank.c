#include <stdio.h>
#include <stdlib.h>
#include "bank.h"


//参数传递1：
double pay1(double num1,double num2){
    double pay;
    pay=num1 - num2;
    return pay;
}
//参数传递2：
double pay2(Bank bank){
    double pay;
    pay = bank.limit - bank.black;
    return pay;
}
//参数传递3：
//用const是省的指针不要乱指向 安全
double pay3(const BankPoint *bp){

    double pay;
    //bp->name = "建设银行"; //在不加const时可以使用此方法赋值
    //由于bank是指针，所以要用 ->
    pay = bp->limit - bp->black;
    return pay;
}
