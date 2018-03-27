//引入头文件
#include <stdio.h>
//引入自己定义的头文件 用 “”
#include "hotel.h"

//char形数组 用来显示酒店名称
char hotelList[4][50]={"香格里拉酒店","河南农家大饭店","金玉良缘情趣酒店","全国最豪华的招待所"};
//无参数 用void
int mean(void){
    int choise; //选择
    int result; //choise 的scanf的返回值 返回0 输入格式不对 。返回非0 是int
    int i;
    printf("现找到以下几家酒店，请您选择适合您的\n");
    for(i=0; i<4; i++){
        printf("============================\n");
        printf("%d、%s\n",i+1,hotelList[i]);
    }
    printf("============================\n");
    printf("输入'5' 退出程序\n");
    printf("============================\n");
    printf("============================\n");
    printf("请输入您想入住的酒店：");

    //scanf如果输入是正确类型 返回非0否则返回0
    //scanf("%d",&choise);

    //验证用户输入非法
    while((result=scanf("%d", &choise)) != 1 || choise < 1 || choise >5){
        if(result != 1 ){
            //scanf("%*s");   //用来处理非整数输入，*表示输入项在读取后不赋值给对应变量
            fflush(stdin);  //清空缓存
        }
        printf("请重新输入选择酒店，必须是 1-4:\n");
        scanf("%d",&choise);
    }
    return choise;
}

//用户入住天数
int night(void){
    int nights;
    printf("请您输入您要入住本酒店的天数：");
    //验证
    while(scanf("%d",&nights) != 1){
        //scanf("%*s");
        fflush(stdin);
        printf("请准确输入您要入住的天数：");
        scanf("%d",&nights);
    }
    return nights;
}

//一共消费多少钱
double total(int nights, double prices){
    //每天递减95折
    double totals = 0; //总价
    int i;
    for(i=0; i<nights; i++){
        totals += prices;
        prices = prices*PRICE;    //define
    }

    return totals;

}
