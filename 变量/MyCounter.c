/*
    用来计算函数被调用了多少次
*/
/*
//1
int counter();

int counter(){
    //定义成静态变量 只在第一次声明时初始化 count的值 只执行一次
    static int count = 0;
    count++;
    return count;
}
*/
//引用外部变量 main.c的whileCount
extern int whileCount;
void counter(int);
void counter(int i){
    static int subTotal = 0;    //静态变量
    subTotal++;
    printf("counter函数被调用了%d次\n",subTotal);
    printf("当前第%d轮\n",whileCount);
}
