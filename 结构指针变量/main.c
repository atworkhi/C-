#include <stdio.h>
#include <stdlib.h>
#include "Hero.h"
#include "demo.h"
#include "bank.h"
/*
//�ṹָ��

//Ƕ��
struct Martial{     //���ɽṹ��
    int id;         //id
    char name[50];  //����
    char desc[100]; //���
    int count;      //����
    int type;       //���� 1.�������ɣ�2.������3.а��
};

struct Player{      //��ҽṹ��
    int id;         //id
    char name[50];  //����
    char sex;       //�Ա�
    struct Martial martial; //������Ϣ
};

//ʵ���� ��̬¼��Ӣ������
//�½�ͷ�ļ� �� ��Դ���ļ�
*/
//�����ⲿ����
//extern User users[10];
int main()
{
    double p;
    /*
    //��������
    //��ʽ1:
    Bank user={"��������","����",5000.00,2000.00};
    p = pay1(user.limit,user1.black);
    */
    /*
    //��ʽ2��
    Bank user={"��������","����",5000.00,2000.00};
    p = pay2(user);
    printf("���ʽ��%.2lf",p);
    */
    //��ʽ3
    BankPoint bank = {"��������","İ����",5000.00,2111.00};
    //������ָ�룬�� &����
    p = pay3(&bank);
    printf("���ʽ:%.2lf\n",p);
    printf("Ĭ�����У�%s",bank.name);
    /*
    Input();
    Show();
    */

    //InputHero();
    /*
    //��ʼ��
    struct Player p1 ={1,"ָ��ṹ",'f',{1,"C�������",500,2}};
    //ָ��ָ��ṹ��ĳ�ʼ��
    struct Player *ptr_p1 = &p1;
    //ʹ��ָ����ʷ�ʽ1�� һ��ע���ָ�������()�� ����*
    printf("%s\t %s\n",(*ptr_p1).name, (*ptr_p1).martial.name);
    //ʹ��ָ����ʷ�ʽ2���� -> ����
    printf("%s\t %s\n",ptr_p1->name, ptr_p1->martial.name);
    */
    return 0;
}
