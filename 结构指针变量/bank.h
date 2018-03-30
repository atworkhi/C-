#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

//�ṹ��Ĳ�������

typedef struct _bank{
    char name[50];  //��������
    char user[50];  //�û���
    double limit;   //���
    double black;   //ʣ����
}Bank;

typedef struct _bankP{
    char *name;  //��������(ָ��)
    char *user;  //�û���
    double limit;   //���
    double black;   //ʣ����
}BankPoint;
//��������1 ֱ�Ӵ���
double pay1(double,double);
//��������2 �ýṹ������
double pay2(Bank);
//��������3 ָ������
double pay3(const BankPoint *bp);


#endif // BANK_H_INCLUDED
