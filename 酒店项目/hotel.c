//����ͷ�ļ�
#include <stdio.h>
//�����Լ������ͷ�ļ� �� ����
#include "hotel.h"

//char������ ������ʾ�Ƶ�����
char hotelList[4][50]={"��������Ƶ�","����ũ�Ҵ󷹵�","������Ե��Ȥ�Ƶ�","ȫ����������д���"};
//�޲��� ��void
int mean(void){
    int choise; //ѡ��
    int result; //choise ��scanf�ķ���ֵ ����0 �����ʽ���� �����ط�0 ��int
    int i;
    printf("���ҵ����¼��ҾƵ꣬����ѡ���ʺ�����\n");
    for(i=0; i<4; i++){
        printf("============================\n");
        printf("%d��%s\n",i+1,hotelList[i]);
    }
    printf("============================\n");
    printf("����'5' �˳�����\n");
    printf("============================\n");
    printf("============================\n");
    printf("������������ס�ľƵ꣺");

    //scanf�����������ȷ���� ���ط�0���򷵻�0
    //scanf("%d",&choise);

    //��֤�û�����Ƿ�
    while((result=scanf("%d", &choise)) != 1 || choise < 1 || choise >5){
        if(result != 1 ){
            //scanf("%*s");   //����������������룬*��ʾ�������ڶ�ȡ�󲻸�ֵ����Ӧ����
            fflush(stdin);  //��ջ���
        }
        printf("����������ѡ��Ƶ꣬������ 1-4:\n");
        scanf("%d",&choise);
    }
    return choise;
}

//�û���ס����
int night(void){
    int nights;
    printf("����������Ҫ��ס���Ƶ��������");
    //��֤
    while(scanf("%d",&nights) != 1){
        //scanf("%*s");
        fflush(stdin);
        printf("��׼ȷ������Ҫ��ס��������");
        scanf("%d",&nights);
    }
    return nights;
}

//һ�����Ѷ���Ǯ
double total(int nights, double prices){
    //ÿ��ݼ�95��
    double totals = 0; //�ܼ�
    int i;
    for(i=0; i<nights; i++){
        totals += prices;
        prices = prices*PRICE;    //define
    }

    return totals;

}
