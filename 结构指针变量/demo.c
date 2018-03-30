#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //getch
#include "demo.h"


//初始化demo.h结构体变量
//注意 Cint类型前面加0表示8进制
User users[10]={
    {1,"小星星",{1991,4,16},'M',59.13},
    {2,"亮晶晶",{1891,12,13},'F',60.00},
    {3,"咚咚咚",{2013,8,9},'F',12.99}
};

//void 显示函数的实现
void Show(){
    //计算初始化了几个数组长度
    int len =sizeof(users)/sizeof(User);
    int i;
    for(i=0; i<len; i++){
        printf("%d\t%s\t%d-%d-%d\t%c\t%.2lf\n",users[i].id,users[i].name,users[i].birth.year,users[i].birth.month,users[i].birth.day,users[i].sex,users[i].weight);
    }
    //printf("%d\n",len);
}

//录入函数实现
void Input(){
    int len = 3;
    //printf("%d",len);
    char choise ;   //循环退出条件
    do{
        if(len>10){
            printf("角色已经满，请去购买\n");
            break;
        }
        users[len].id=len+1;
        printf("请输入用户名:");
        scanf("%s",users[len].name);
        printf("请输入出生日期,用空格隔开：");
        scanf("%d%d%d",&users[len].birth.year,&users[len].birth.month,&users[len].birth.day);

        printf("输入性别 M/F：");
        fflush(stdin);//清空缓冲区
        scanf("%c",&users[len].sex);
        fflush(stdin);//清空缓冲区
        printf("请输入体重：");
        scanf("%lf",&users[len].weight);
        len++;
        printf("如继续输入，请输入y/Y:\n");
        //getch 获取输入的字符，不需要按回车就可以立刻执行
        choise = getch();
    }while(choise == 'y' || choise == 'Y');
}
