#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ƫ����
#define KEY 5
//�ַ������� ����
// ���ܷ�ʽ�����ַ���ÿ��Ԫ�ؼ���λ�ü���ƫ����
//���� hanxx 'h'+KEY+0 a+KEY+1

//����
char * encrypt(char[]);
//����
char * decrypt(char[]);

int main()
{
    char password[50]="admin";
    encrypt(password);
    printf("���ܺ��������%s\n",password);

    decrypt(password);
    printf("���ܺ��������%s\n",password);
    return 0;
}
char * encrypt(char str[]){
    int i;
    //�ַ�������
    int count = strlen(str);
    for(i=0; i<count; i++){
        //�����㷨 ע�⡮\0������Ҫ�滻
        str[i] = str[i]+i+KEY;
    }
    return str;
}

char * decrypt(char str[]){
    int i;
    //�ַ�������
    int count = strlen(str);
    for(i=0; i<count; i++){
        //�����㷨 ע�⡮\0������Ҫ�滻
        str[i] = str[i]-i-KEY;
    }
    return str;
}
