#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
//���ú���


/*
<math.h >�е���������

double sqrt(double x) ����x��ƽ����

double pow(double x,double y); ����x��y����

double ceil(double x) ��С��x����С����

double floor(double x) �󲻴���x���������

<ctype.h>�еĺ���

int toupper(int x)  ���xΪСд��ĸ �򷵻ض�Ӧ�Ĵ�д��ĸ

int tolower(int x) ���xΪ��д��ĸ �򷵻ض�Ӧ��Сд��ĸ

int isupper(x) �ж��Ƿ�Ϊ��д��ĸ Ascii
int islower(x) �ж��Ƿ�ΪСд��ĸ Ascii

int isalpha(x) �ж��ַ��Ƿ�Ϊ��ĸ ASCII
int isdigit(x) �ж��ַ��Ƿ�Ϊ���� ��Ҫ�á� �� ��ȻĬ��ΪAscii

<stdlib.h>�еĺ���

int rand() ����һ�������

void exit(int retval) ��ֹ����
*/

//����

int main()
{
    //calloc ��̬�����ڴ�����ʼ��������
    //malloc ��̬�����ڴ�
    int i; //ѭ������
    int * nums; //����һ��ָ��
    //Ϊǰ���ָ�붯̬������20�ֽڵĿռ� Ҳ����5��int��һ��int 4���ռ䣩
    //nums =(int *)malloc(sizeof(int)*5); //nums[5]

    nums=(int *)calloc(5,sizeof(int));
   // for(i=0;i<5;i++){
   //    printf("��Ϊ��%d��Ԫ�ظ�ֵ��",i+1);
   //     scanf("%d",nums+i);
   //}
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d\t",*(nums+i));
    }
    //��malloc������ռ�� Ҫ�ͷ��ڴ�
    free(nums);
    //ָ��ָ���
    nums = NULL;
    /*
    //stdlib.h
    //����� ��Ҫʱ������
    srand((unsigned)time(NULL));
    printf("%d",rand());

    //exit(0) // 0���������˳�����
    //system�п�������һ��dosָ��

        //��ɫ����������ʮ���������־�������һ��Ϊǰ��ɫ���ڶ�������ɫ
        //��ɫ-0 ��ɫ-1 ��ɫ-2 ����ɫ-3
        //��ɫ-4 ��ɫ-5 ��ɫ-6 ��ɫ-7
        //��ɫ-8 ����ɫ-9 ����ɫ-A ����ɫ-C
        //����ɫ-D ����ɫ-E ����ɫ-C


        //�ػ�����
        //shutdown \s \t 180 //180s��ػ�
        //shutdown \a ȡ���ػ�

    system("color 3E");
    */
    /*
    //math.h
    //ceil ����ȡֵ floor ����ȡֵ ���Ϊ���� ���෴
     printf("%.2lf\n",ceil(98.1));
     printf("%.2lf\n",floor(98.9));
     //����ֵ
     printf("%d\n",abs(-18));
     //��ƽ����
     printf("%.2lf\n",sqrt(9));
     //��x��y����
     printf("%.2lf\n",pow(2,3));
     */
    /*
    //ctype.h
    //��c������0�����Ǽ٣���0Ϊ��
    printf("%d \n",isupper(80)); //ASCII P ��
    printf("%d \n",isupper(97)); //��
    printf("%d \n",isupper("B")); //��


    printf("---------------------------\n");
    printf("%d \n",islower(97)); //ASCII ��
    printf("%d \n",islower(80));   //��
    printf("%d \n",islower("a"));  //��
    printf("------------isalpha---------------\n");
    printf("%d\n",isalpha(97)); //�� 'a' ��

    printf("%d\n",isalpha(47)); //ASCII / ��
    printf("---------------------------\n");
    //ascii 48-57
    printf("%d \n",isdigit(48));
    printf("%d \n",isdigit(97));
    */

    /*
    //С���� ���û�����Ľ��ת�ɴ�д��
    int money ;  //�û������Ǯ
    int moneys[10]; //����һ������ ѭ������ȡ����ֵ
    int len=0;   //���� ��ѭ������
    int i =0;
    char upmoney[10][4]={"��","Ҽ","��","��","��","��","½","��","��","��"}; //��д�ַ�

    printf("���������Ľ��:");
    scanf("%d",&money);
    while(money != 0){
        moneys[i] = money%10;
        money/=10;  //ȥ�����һλ
        i++; //ȡ����������
        len++;//�㳤��

    }
    for(i=0; i<len; i++){

        printf("%d ---- %s\n",moneys[i],upmoney[moneys[i]]);
    }
    */
    //���ú���

    return 0;
}
