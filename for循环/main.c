//
//  main.c
//  for循环
//  循环输入6个月的工资数 病计算半年的平均工资
//  Created by 韩星星 on 2018/3/11.
//  Copyright © 2018年 韩星星. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //求1-100之间的偶数和
    int sum;
    const int N = 100;
    for(int i=1;i<=N;i++){
        if(i%2 != 0){
            continue;
        }
        sum+=i;
    }
    printf("1-100的偶数和为%d \n",sum);
    
    /*
    //打印一个纯粹的加法表：输入用户输入的数字的加法
    //定义一个数字
    int number;
    int j;
    printf("请输入您想计算出的数字：\n");
    scanf("%d",&number);
    for (j=0; j<=number; j++) {
        
        //打印加法
        printf("%d + %d = %d",j,(number-j),number);
        if (j%2==0) {
            printf("\t\t");
        }
        else{
            printf("\n");
        }
            
    }
     */
    /*
    //固定循环次数 6次
    //const 常量
    const int N=6;
    //定义salary
    double salary;
    //用来计算工资和
    double sum;
    for (int i=0; i<N; i++) {
        printf("\n请输入您%d月份的工资:\n",i+1);
        scanf("%lf",&salary);
        sum += salary;
    }
    printf("您的平均工资是%.2lf\n",sum/6);
     
     */
    return 0;
}
