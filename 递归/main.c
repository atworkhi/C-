#include <stdio.h>
#include <stdlib.h>

/*
    �ݹ� ���Ǻ���������ñ���ѭ��
*/

//����2  쳲��������� 1 1 2 3 5 8 13 ��������
//������
unsigned long fun1(unsigned n);

int main(){

    printf("%d\t",fun1(7));

    return 0;
}

unsigned long fun1(unsigned n){
    if (n > 2){
        return fun1(n-1)+fun1(n-2);
    }else{
        return 1;
    }
}
/*
//����1�� ��ĳ�����Ľ׳�
int factorial(int); //��������

int main()
{
    //���ú���
    int avg =factorial(4);
    printf("4�Ľ׳�Ϊ��%d\n",avg);
    printf("Hello world!\n");
    return 0;
}

//��������
int factorial(int n){
    int avg;
    //ѭ���˳�����
    if(n == 1){
        return 1;
    }

    avg=n*factorial(n-1);
}
*/
