#include <stdio.h>
#include <stdlib.h>

/*
    ָ�� �� hello World
*/
int main()
{

    //������ ��ά����
    //ѭ������ѧ����û�οεĳɼ�
    int i , j ;
    int score[3][4];
    //���ѭ��������
    for(i=0; i<3; i++){
        //�ڲ�ѭ��������
        for(j=0; j<4; j++){
            printf("�������%dλͬѧ��%d�ŵĳɼ�:",i+1,j+1);
            //����i��j��ֵ
            scanf("%d",&score[i][j]);
        }
    }
    printf("\n------------------------------------------\n");

    for(i=0; i<3; i++){

        for(j=0; j<4; j++){
            printf("%d \t",score[i][j]);
        }
        printf("\n");
    }
    /*
    //������ ��ָ��ʵ�����������
    int num[]={15,20,25,30,35,40};
    int i;
    int temp;
    int * ptr_show;
    int * ptr_num_start;
    int * ptr_num_end;
    //startָ���׵�ַ
    ptr_num_start = &num[0];
    //end ָ��ĩ��ַ
    ptr_num_end = &num[5];

    ptr_show=num;
    for(i=0;i<6/2;i++){
        //ʵ������ ��ֻ����β���� i �� N-i-1
        temp = *ptr_num_start;
        *ptr_num_start = *ptr_num_end;
        *ptr_num_end = temp;
        //startָ����� endָ�� ��ǰ
        ptr_num_start++;
        ptr_num_end--;
    }
    //ѭ����ȡ����
    for(i=0; i<6; i++){
        printf("%d \t",*(ptr_show+i));
    }
    */
    /*
    //������ ָ��������
    double score[]={11,22,33,44,55};
    //ָ��
    double * ptr_score;
    int i;
    // ����������ָ��
    //ptr_score=score;
    //��ָ��������׵�ַ
    ptr_score = &score[0];
    printf("score������׵�ַ��%p \t ,ָ��ĵ�ַ�� %p \n",&score[0],ptr_score);
    printf("score�������ֵ��%.2lf \t ,ָ���ֵ�� %.2lf \n",score[0],*ptr_score);
    //ѭ��ȡֵ
    printf("-----------��һ��ʹ������ȡֵ------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",score[i]);
    }
    printf("\n");
    printf("-----------�ڶ���ʹ��ָ��ȡֵ------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",*(ptr_score+i));
    }
    printf("\n");
    //ע�� ʹ�ô��ַ��� ����´���Ҫ�ٴε���ָ�룬��Ҫ��ָ���ٴ�ָ�����ݵ��׵�ַ ��Ȼ��ָ���������������һλ
    printf("-----------������ʹ��ָ��ȡֵ------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",*ptr_score++);
    }
    //ʹ�����淽��ִ�к������ô�
    ptr_score=score;

    printf("\n");
    printf("-----------�������------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",ptr_score[i]);
    }
    printf("\n");
    */
    /*
    //�ڶ���
    int num1=1024;
    int num2=2048;
    int * ptr1 = &num1;
    int * ptr2 = &num2;
    printf("ptr1��ַ��%p \t num1ֵ%d\t ptr1��ֵ%d \n",ptr1,num1, *ptr1);
    printf("ptr2��ַ��%p \t num2ֵ%d\t ptr2��ֵ%d \n",ptr2,num2, *ptr2);

    //ָ���ַ��ֵ
    //ptr1 =ptr2;

    printf("----------------------------------------------------\n");
    printf("ptr2�ĵ�ַ��ֵ��ptr1�ĵ�ַ\n");
    printf("ptr1��ַ��%p \t num1ֵ%d\t ptr1��ֵ%d \n",ptr1,num1, *ptr1);
    printf("ptr2��ַ��%p \t num2ֵ%d\t ptr2��ֵ%d \n",ptr2,num2, *ptr2);

    //ָ�����ݸ�ֵ
    //*ptr1 =*ptr2;
    printf("----------------------------------------------------\n");
    printf("ptr2��ֵ��ֵ��ptr1��ֵ\n");
    printf("ptr1��ַ��%p \t num1ֵ%d\t ptr1��ֵ%d \n",ptr1,num1, *ptr1);
    printf("ptr2��ַ��%p \t num2ֵ%d\t ptr2��ֵ%d \n",ptr2,num2, *ptr2);

    //�����ĸ�ֵ
    num1=num2;
    printf("num2��ֵ��ֵ��num1��ֵ\n");
    printf("ptr1��ַ��%p \t num1ֵ%d\t ptr1��ֵ%d \n",ptr1,num1, *ptr1);
    printf("ptr2��ַ��%p \t num2ֵ%d\t ptr2��ֵ%d \n",ptr2,num2, *ptr2);
    */

    /*
    //��һ��
    int num = 9;
    //����ָ�� * p_
    int * ptr_num = &num;
    //ָ��Ҳ�е�ַ
    int * ptr_num2 = &ptr_num;
    printf("num�ĵ�ַ�� %p\n",ptr_num);

    printf("ָ��ĵ�ַ�ǣ�%p\n",ptr_num2);

    // * ��ȡ�����ַ����Ӧ��ֵ
    printf("*ptr_num��Ӧ��ֵ��%d \n",*ptr_num);

    //�޸�ָ������Ӧ��ֵ
    *ptr_num =9999;
    printf("�޸ĺ��ָ���ֵ%d \t  num: %d\n",*ptr_num,num);

    */
    return 0;
}
