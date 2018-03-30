#include <stdio.h>
#include <stdlib.h>

#include "Hero.h"

Hero heros[5];   //初始化五个英雄

Job jobs[]={
    {1,"法师","奥数"},
    {2,"刺客","隐身"},
    {3,"战士","冲冲冲"},
    {4,"辅助","无敌奶"},
    {5,"射手","穿云箭"},
};

//输入实现
void InputHero(){
    int i,j;
    int jobChoise=0;  //选择职业
    for(i = 0; i<5; i++){
        printf("请输入第%d位英雄的信息:\n",i+1);

        heros[i].id = i+1;  //id
        printf("名称：");
        heros[i].name = (char *)malloc(50); //给字符空间
        scanf("%s",heros[i].name);
        fflush(stdin);
        printf("性别：");
        scanf("%c",&heros[i].sex);
        fflush(stdin);  //良好的输入习惯 录入字符后清空缓冲区

        printf("=====================================\n");
        for(j=0; j<5;j++){
            printf("%d\t %s\t %s\n",jobs[j].id,jobs[j].name,jobs[j].desc);
        }
        printf("\n=====================================\n");
        printf("请选择职业：1-5之间");
        scanf("%d", &jobChoise);
        heros[i].job = jobs[jobChoise-1];
        printf("血量：");
        scanf("%lf",&heros[i].hp);

        printf("%s当前职业是《%s》\n",heros[i].name,heros[i].job.name);
    }
}

//输出实现


