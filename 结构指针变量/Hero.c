#include <stdio.h>
#include <stdlib.h>

#include "Hero.h"

Hero heros[5];   //��ʼ�����Ӣ��

Job jobs[]={
    {1,"��ʦ","����"},
    {2,"�̿�","����"},
    {3,"սʿ","����"},
    {4,"����","�޵���"},
    {5,"����","���Ƽ�"},
};

//����ʵ��
void InputHero(){
    int i,j;
    int jobChoise=0;  //ѡ��ְҵ
    for(i = 0; i<5; i++){
        printf("�������%dλӢ�۵���Ϣ:\n",i+1);

        heros[i].id = i+1;  //id
        printf("���ƣ�");
        heros[i].name = (char *)malloc(50); //���ַ��ռ�
        scanf("%s",heros[i].name);
        fflush(stdin);
        printf("�Ա�");
        scanf("%c",&heros[i].sex);
        fflush(stdin);  //���õ�����ϰ�� ¼���ַ�����ջ�����

        printf("=====================================\n");
        for(j=0; j<5;j++){
            printf("%d\t %s\t %s\n",jobs[j].id,jobs[j].name,jobs[j].desc);
        }
        printf("\n=====================================\n");
        printf("��ѡ��ְҵ��1-5֮��");
        scanf("%d", &jobChoise);
        heros[i].job = jobs[jobChoise-1];
        printf("Ѫ����");
        scanf("%lf",&heros[i].hp);

        printf("%s��ǰְҵ�ǡ�%s��\n",heros[i].name,heros[i].job.name);
    }
}

//���ʵ��


