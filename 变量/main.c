#include <stdio.h>
#include <stdlib.h>

/*
    �ֲ�������ֻ�����ڱ������ڵĴ����
    ȫ�ֱ���������������������Ч��

    �洢���ͣ�
        auto        �Զ��洢        ֻ�����ڿ������������������ Ĭ�������Ϊ�Զ��洢
        register    �Ĵ����洢      ֻ���ڿ������������ٶȿ飬����ѭ�������϶��ѭ������ ����ʹ�ÿɶ���Ϊ��
        static      ��̬�洢        �������ʱ�������󣬳������������ʧ
        extern      �ⲿ����        �������������������ڹᴩ����Ŀ�ʼ���������������������ڱ�
*/

int whileCount = 0; //����ȫ�ֱ��� ������¼whileѭ������

//1�����㺯�������ö��ٴ�
int main()
{
    /*
    //1
    int count = 0;
    counter();  //1�ε��� count+1
    counter();  //2�ε��� count+2
    counter();  //3�ε��� count+3
    count = counter();  //4�ε��� count+4
    printf("��������%d��",count);
    */
    //2
    int value;  //�Զ����� -- ѭ������
    register int i; //ѭ������������Ϊ�Ĵ����洢
    printf("������ѭ������(��0�˳�ѭ��)��");
    //scanf("%d",&value); ��������� ���� 1 ������ ���� 0
    int result = scanf("%d",&value);
    printf("%d",result);
    //ѭ��¼��
    while(scanf("%d",&value)==1 && value > 0){
        whileCount++;
        for(i = value; i>=0; i--){

            counter(i);  //ÿ��ѭ������һ��
        }
        printf("������ѭ������(��0�˳�ѭ��)��");



    }
    return 0;

}
