#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

/*
    ��ʾ�Ƶ��б��û�ѡ����ס���� �������Ǯ

    ����ͷ�ļ�.h ������������ ���� �궨��
*/

//�����ⲿ���� ��Ϊ�������ļ��У������ùؼ��� extern
extern char hotelList[4][50];
int main()
{
    int choise; //ѡ��
    int nights; //����
    double totals;  //��Ǯ

    while(1){
        choise = mean();
        printf("**********************************\n");
        if(choise>0 && choise<5){
            printf("��ѡ��ľƵ��ǣ�\n");
            printf("%d��%s",choise, hotelList[choise-1]);
            printf("\n**********************************\n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            nights = night();
            printf("������ס%s %d��",hotelList[choise-1],nights);
            printf("\n++++++++++++++++++++++++++++++++++++++\n");
            switch (choise){
                case 1:
                    totals = total(nights,HOTEL1);
                    break;
                case 2:
                    totals = total(nights,HOTEL2);
                    break;
                case 3:
                    totals = total(nights,HOTEL3);
                    break;
                case 4:
                    totals = total(nights,HOTEL4);
                    break;
                }
            printf("#######################################\n");
            printf("������ס%s %d��,һ������ ��%.2lf",hotelList[choise-1],nights,totals);
            printf("\n#######################################\n");

        }else if(choise == 5){
            printf("��ӭ�ٴ�ʹ�ñ�ϵͳ���ټ�������\n");
            break;
        }
    }
    return 0;
}
