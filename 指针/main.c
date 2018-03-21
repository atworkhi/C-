#include <stdio.h>
#include <stdlib.h>

/*
    指针 的 hello World
*/
int main()
{

    //第五章 二维数组
    //循环输入学生的没次课的成绩
    int i , j ;
    int score[3][4];
    //外层循环控制行
    for(i=0; i<3; i++){
        //内层循环控制列
        for(j=0; j<4; j++){
            printf("请输入第%d位同学第%d门的成绩:",i+1,j+1);
            //输入i与j的值
            scanf("%d",&score[i][j]);
        }
    }
    printf("\n------------------------------------------\n");

    for(i=0; i<3; i++){

        for(j=0; j<4; j++){
            printf("%d \t",score[i][j]);
        }
        printf("\n");
    }
    /*
    //第四章 用指针实现数组的逆序
    int num[]={15,20,25,30,35,40};
    int i;
    int temp;
    int * ptr_show;
    int * ptr_num_start;
    int * ptr_num_end;
    //start指向首地址
    ptr_num_start = &num[0];
    //end 指向末地址
    ptr_num_end = &num[5];

    ptr_show=num;
    for(i=0;i<6/2;i++){
        //实现逆序 ，只需首尾交换 i 与 N-i-1
        temp = *ptr_num_start;
        *ptr_num_start = *ptr_num_end;
        *ptr_num_end = temp;
        //start指针向后 end指针 向前
        ptr_num_start++;
        ptr_num_end--;
    }
    //循环获取数组
    for(i=0; i<6; i++){
        printf("%d \t",*(ptr_show+i));
    }
    */
    /*
    //第三章 指针与数组
    double score[]={11,22,33,44,55};
    //指针
    double * ptr_score;
    int i;
    // 数组名就是指针
    //ptr_score=score;
    //或指向数组的首地址
    ptr_score = &score[0];
    printf("score数组的首地址：%p \t ,指针的地址是 %p \n",&score[0],ptr_score);
    printf("score数组的首值：%.2lf \t ,指针的值是 %.2lf \n",score[0],*ptr_score);
    //循环取值
    printf("-----------第一种使用数组取值------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",score[i]);
    }
    printf("\n");
    printf("-----------第二种使用指针取值------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",*(ptr_score+i));
    }
    printf("\n");
    //注意 使用此种方法 如果下次需要再次调用指针，需要把指针再次指向数据的首地址 不然就指向了最后数组的最后一位
    printf("-----------第三种使用指针取值------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",*ptr_score++);
    }
    //使用上面方法执行后必须调用此
    ptr_score=score;

    printf("\n");
    printf("-----------结果测试------------\n");
    for(i=0; i<5; i++){
        printf("%.2lf \t",ptr_score[i]);
    }
    printf("\n");
    */
    /*
    //第二章
    int num1=1024;
    int num2=2048;
    int * ptr1 = &num1;
    int * ptr2 = &num2;
    printf("ptr1地址是%p \t num1值%d\t ptr1的值%d \n",ptr1,num1, *ptr1);
    printf("ptr2地址是%p \t num2值%d\t ptr2的值%d \n",ptr2,num2, *ptr2);

    //指针地址赋值
    //ptr1 =ptr2;

    printf("----------------------------------------------------\n");
    printf("ptr2的地址赋值给ptr1的地址\n");
    printf("ptr1地址是%p \t num1值%d\t ptr1的值%d \n",ptr1,num1, *ptr1);
    printf("ptr2地址是%p \t num2值%d\t ptr2的值%d \n",ptr2,num2, *ptr2);

    //指针内容赋值
    //*ptr1 =*ptr2;
    printf("----------------------------------------------------\n");
    printf("ptr2的值赋值给ptr1的值\n");
    printf("ptr1地址是%p \t num1值%d\t ptr1的值%d \n",ptr1,num1, *ptr1);
    printf("ptr2地址是%p \t num2值%d\t ptr2的值%d \n",ptr2,num2, *ptr2);

    //变量的赋值
    num1=num2;
    printf("num2的值赋值给num1的值\n");
    printf("ptr1地址是%p \t num1值%d\t ptr1的值%d \n",ptr1,num1, *ptr1);
    printf("ptr2地址是%p \t num2值%d\t ptr2的值%d \n",ptr2,num2, *ptr2);
    */

    /*
    //第一章
    int num = 9;
    //定义指针 * p_
    int * ptr_num = &num;
    //指针也有地址
    int * ptr_num2 = &ptr_num;
    printf("num的地址是 %p\n",ptr_num);

    printf("指针的地址是：%p\n",ptr_num2);

    // * 是取这个地址所对应的值
    printf("*ptr_num对应的值：%d \n",*ptr_num);

    //修改指针所对应的值
    *ptr_num =9999;
    printf("修改后的指针的值%d \t  num: %d\n",*ptr_num,num);

    */
    return 0;
}
