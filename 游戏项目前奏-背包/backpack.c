#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "backpack.h"

//��ʼ������ָ��
Prop *prop;
Player *player;

int propsCount = 0;
int playersCount =0;
//��ʼ��
void Init(){
    static Prop props[]={
        {1,"˫������",2000,10,"һСʱ֮��˫������"},
        {2,"ƣ��ҩ",1000,7,"ʹ�ú���������ƣ��ֵ15��"},
        {3,"������",9000,9,"ֱ��һ�����������������"},
        {4,"ʷʫ����",11111,2,"ʹ�ú󽫻��һ��ʷʫװ��"},
        {5,"�������",5000,10,"�����ȡһ������"}
    };

prop =props;    //����ָ��ָ��
propsCount =5;
    static Player players[]={
        {1,"ëë��","123456",.gold=50000,.sysee=0,.bag.max=8},
        {2,"�Լ��Լ�","123456",.gold=150000,.sysee=0,.bag.max=8},
        {3,"С����","123456",.gold=100000,.sysee=0,.bag.max=8}
    };

player = players;
playersCount=3;

}

void ShowProps(){
    if(prop ==NULL){
        return;
    }
    int i;
    printf("%-5s%-14s%-9s%-7s%-20s\n","���","����","����","���","����");
    for(i=0; i<propsCount;i++){
        printf("%-5d%-14s%-9.2lf%-7d%-20s\n",prop[i].id,prop[i].name,prop[i].price,prop[i].stock,prop[i].desc);
    }

}


void ShowPlays(){
    int i,j;
    if(player ==NULL){
        return;
    }

    printf("%-5s%-14s%-14s%-11s%-11s\n","�û�ID","�ǳ�","����","���","Ԫ��");
    for(i=0; i<playersCount;i++){
        printf("%-5d%-14s%-14s%-11.2lf%-11.2lf\n",player[i].id,player[i].name,player[i].pass,player[i].gold,player[i].sysee);

        printf("\n");
    }
}
//���ף����Ҫ��ָ�� ������Ҫ����Ǯ
void Trade(Player *p,int propId){
    int i;
    //��֤����Ʒ��桢�������ռ�
    Prop *tradeProp;    //��Ҫ�������Ʒָ��

    for(i=0; i<propsCount;i++){
        //�ҵ���Ʒ
        if(propId == prop[i].id){
            //��I��Ԫ�صĵ�ַ
            tradeProp = &prop[i];   //tradeProp = prop+i;
            break;
        }
    }
    //ָ�����Ԫ���� "->"
    if(tradeProp->stock <=0){
        printf("��治�㣡����\n");
        return;
    }
    if(p->gold < tradeProp->price){
        printf("�������㣬���ֵ����\n");
        return;
    }

    if(p->bag.count >= p->bag.max){
        printf("��������������ʧ��!!\n");
        return;
    }
    //�������� ����
    //1.��Ʒ-1��
    tradeProp->stock--;
    //2.���-��Ǯ;
    p->gold -= tradeProp->price;
    //3.��������
    //�жϱ����Ƿ��д���Ʒ�����û�� ��ӣ�������ڴ���Ʒ +1
    for(i=0; i< p->bag.count ; i++){
        //����������������Ʒ��ֻ��Ҫ�������Ʒ++
        if(propId == p->bag.prop[i].id){
            p->bag.prop[i].stock++;
            break;
        }else{
          //�����ƷID�������Ķ�Ӧ����
            p->bag.prop[p->bag.count].id = tradeProp->id;
            //�ҵ���Ʒ��Ǯ��ֵ�� ��������Ʒ��Ǯ
            p->bag.prop[p->bag.count].price = tradeProp->price;
            //��һ���򣬱����Ŀ��Ϊ1
            p->bag.prop[p->bag.count].stock = 1;
            //��Ʒ���ƣ���Ҫ���ַ�������
            strcpy(p->bag.prop[p->bag.count].name,tradeProp->name);
            //��Ʒ����
            strcpy(p->bag.prop[p->bag.count].desc,tradeProp->desc);
            //���׳ɹ� ����+1;
            p->bag.count++;
        }
    }
}
