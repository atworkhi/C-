#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/**/
//����ṹ��
//typedef struct �򻯽ṹ��

//ְҵ
typedef struct _job{    //ְҵ
    int id;
    char *name;
    char *desc;
}Job;

//����
typedef struct _abillity{
    int id;
    char *name;     //����
    char *info;     //˵��

}Abillity;

//ʱ��
typedef struct _date{
    int year;
    int month;
    int day;
}Date;

//Ӣ��
typedef struct _hero{
    int id;
    char *name;
    char sex;
    Job job;            //ְҵ  Ƕ��
    double hp;
    Abillity abillity;  //����
    Date date;          //����ʱ��

}Hero;

//��������Ӣ�۵ĺ���
void InputHero();

//���Ӣ�ۺ���
void ShowHero();


#endif // HERO_H_INCLUDED
