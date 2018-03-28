#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//偏移量
#define KEY 5
//字符串加密 解密
// 加密方式，把字符串每个元素加上位置加上偏移量
//例如 hanxx 'h'+KEY+0 a+KEY+1

//加密
char * encrypt(char[]);
//解密
char * decrypt(char[]);

int main()
{
    char password[50]="admin";
    encrypt(password);
    printf("加密后的密码是%s\n",password);

    decrypt(password);
    printf("解密后的密码是%s\n",password);
    return 0;
}
char * encrypt(char str[]){
    int i;
    //字符串长度
    int count = strlen(str);
    for(i=0; i<count; i++){
        //加密算法 注意‘\0’不需要替换
        str[i] = str[i]+i+KEY;
    }
    return str;
}

char * decrypt(char str[]){
    int i;
    //字符串长度
    int count = strlen(str);
    for(i=0; i<count; i++){
        //加密算法 注意‘\0’不需要替换
        str[i] = str[i]-i-KEY;
    }
    return str;
}
