#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //getch
#include "demo.h"


//��ʼ��demo.h�ṹ�����
//ע�� Cint����ǰ���0��ʾ8����
User users[10]={
    {1,"С����",{1991,4,16},'M',59.13},
    {2,"������",{1891,12,13},'F',60.00},
    {3,"������",{2013,8,9},'F',12.99}
};

//void ��ʾ������ʵ��
void Show(){
    //�����ʼ���˼������鳤��
    int len =sizeof(users)/sizeof(User);
    int i;
    for(i=0; i<len; i++){
        printf("%d\t%s\t%d-%d-%d\t%c\t%.2lf\n",users[i].id,users[i].name,users[i].birth.year,users[i].birth.month,users[i].birth.day,users[i].sex,users[i].weight);
    }
    //printf("%d\n",len);
}

//¼�뺯��ʵ��
void Input(){
    int len = 3;
    //printf("%d",len);
    char choise ;   //ѭ���˳�����
    do{
        if(len>10){
            printf("��ɫ�Ѿ�������ȥ����\n");
            break;
        }
        users[len].id=len+1;
        printf("�������û���:");
        scanf("%s",users[len].name);
        printf("�������������,�ÿո������");
        scanf("%d%d%d",&users[len].birth.year,&users[len].birth.month,&users[len].birth.day);

        printf("�����Ա� M/F��");
        fflush(stdin);//��ջ�����
        scanf("%c",&users[len].sex);
        fflush(stdin);//��ջ�����
        printf("���������أ�");
        scanf("%lf",&users[len].weight);
        len++;
        printf("��������룬������y/Y:\n");
        //getch ��ȡ������ַ�������Ҫ���س��Ϳ�������ִ��
        choise = getch();
    }while(choise == 'y' || choise == 'Y');
}
