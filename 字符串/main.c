#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    函数 String.h
    strlen(数组)  字符串长度
    strcpy(复制结果,要复制的数组)    字符串复制
    strcmp(数组,数组)  字符串比较 0 相等
    strcat(数组，数组)   字符串拼接 注意 下标越界
*/


//封装 fgets    把最后的\n 替换成 \0
void GetString(char[],int); //参数 一个数组 另一个长度

//实例 定义一个函数 返回数组的长度
int GetStrLen(char[]);


void GetString(char str[],int len){
    fgets(str,len,stdin);
    //查找数组
    char *find = strchr(str,'\n');  //用指针查找是否存在换行符
    if(find){
        *find = '\0';   //如果存在替换
    }
}
int GetStrLen(char str[]){
    int len = 0; //初始化
    //因为字符串数组的最后一为是'\0' 所以循环退出条件就是
    while(str[len] !='\0'){
        if(str[len]=='\n'){
            str[len]='\0';    //手动把\n替换成\0
            break;
        }
        len++;
    }
    return len;
 }

int main()
{

    char str1[]="hanxx";
    printf("字符串str1长度为%d\n",GetStrLen(str1));
    char str2[40];
    fgets(str2,20,stdin);
    printf("字符串str1长度为%d\n",GetStrLen(str2));

    /*
    //字符串是一段连续的字符数组 不过，最后一位是 '\0';
    //定义字符两种方式  两种都一样 '\0'占一字符
    char str1[]={'h','g','x','\0'};
    char str2[]="hgx";
    printf("str1长度为%d\n",sizeof(str1));
    printf("str1长度为%d\n",sizeof(str2));

    //输入字符串 gets puts

    char str3[10];
    printf("请输入字符\n");
    //由于字符串为数组，所以 输入时不用添加 &符号
    gets(str3); //scanf("%s",str3);

    puts(str3); //printf("%s",str3);

    //但是 gets 有bug ，因为本身他是在控制台接收输入数据，但是不做长度验证，容易照成下标越界
    //用fgets(数组、长度、标准输入输出流)
    char str4[10];
    //实际字符长度为 8 - 1 ; fgets 默认会加上 \n;
    fgets(str4,8,stdin);
    puts(str4);

    printf("\n");
    */
    return 0;
}
