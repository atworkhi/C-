#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    ���� String.h
    strlen(����)  �ַ�������
    strcpy(���ƽ��,Ҫ���Ƶ�����)    �ַ�������
    strcmp(����,����)  �ַ����Ƚ� 0 ���
    strcat(���飬����)   �ַ���ƴ�� ע�� �±�Խ��
*/


//��װ fgets    ������\n �滻�� \0
void GetString(char[],int); //���� һ������ ��һ������

//ʵ�� ����һ������ ��������ĳ���
int GetStrLen(char[]);


void GetString(char str[],int len){
    fgets(str,len,stdin);
    //��������
    char *find = strchr(str,'\n');  //��ָ������Ƿ���ڻ��з�
    if(find){
        *find = '\0';   //��������滻
    }
}
int GetStrLen(char str[]){
    int len = 0; //��ʼ��
    //��Ϊ�ַ�����������һΪ��'\0' ����ѭ���˳���������
    while(str[len] !='\0'){
        if(str[len]=='\n'){
            str[len]='\0';    //�ֶ���\n�滻��\0
            break;
        }
        len++;
    }
    return len;
 }

int main()
{

    char str1[]="hanxx";
    printf("�ַ���str1����Ϊ%d\n",GetStrLen(str1));
    char str2[40];
    fgets(str2,20,stdin);
    printf("�ַ���str1����Ϊ%d\n",GetStrLen(str2));

    /*
    //�ַ�����һ���������ַ����� ���������һλ�� '\0';
    //�����ַ����ַ�ʽ  ���ֶ�һ�� '\0'ռһ�ַ�
    char str1[]={'h','g','x','\0'};
    char str2[]="hgx";
    printf("str1����Ϊ%d\n",sizeof(str1));
    printf("str1����Ϊ%d\n",sizeof(str2));

    //�����ַ��� gets puts

    char str3[10];
    printf("�������ַ�\n");
    //�����ַ���Ϊ���飬���� ����ʱ������� &����
    gets(str3); //scanf("%s",str3);

    puts(str3); //printf("%s",str3);

    //���� gets ��bug ����Ϊ���������ڿ���̨�����������ݣ����ǲ���������֤�������ճ��±�Խ��
    //��fgets(���顢���ȡ���׼���������)
    char str4[10];
    //ʵ���ַ�����Ϊ 8 - 1 ; fgets Ĭ�ϻ���� \n;
    fgets(str4,8,stdin);
    puts(str4);

    printf("\n");
    */
    return 0;
}
