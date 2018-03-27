#include <stdio.h>
#include <stdlib.h>

/*
//1、参数传递  按值传递
void change(int n){
    //调用后 change函数中num为10
    n++;
}


int main()
{
    //定义一个num
    int num = 9;
    //把值传给 change函数
    change(num);
    //由于num作用域为本函数，所以 main中的 num 还是9
    printf("%d\n",num);
    return 0;
}
*/

//2.参数传递 引用传递

void change(int *num);
//指针
void change(int *num){
    //把指针指向的内容加1
    *num+=1;
}

int main(){
    int num = 9;
    //调用change 并取地址
    change(&num);
    //由于是指针指向 num 9,而change函数是寻指针，并把指针指向的数据+1 所以 num值已经被+1
    printf("%d\n",num);
    return 0;
}
