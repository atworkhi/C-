#include <stdio.h>
#include <stdlib.h>
#include "bank.h"


//��������1��
double pay1(double num1,double num2){
    double pay;
    pay=num1 - num2;
    return pay;
}
//��������2��
double pay2(Bank bank){
    double pay;
    pay = bank.limit - bank.black;
    return pay;
}
//��������3��
//��const��ʡ��ָ�벻Ҫ��ָ�� ��ȫ
double pay3(const BankPoint *bp){

    double pay;
    //bp->name = "��������"; //�ڲ���constʱ����ʹ�ô˷�����ֵ
    //����bank��ָ�룬����Ҫ�� ->
    pay = bp->limit - bp->black;
    return pay;
}
