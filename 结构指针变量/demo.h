#ifndef DEMO_H_INCLUDED
#define DEMO_H_INCLUDED

//定义结构体
typedef struct _time{   //发布时间
    int year;
    int month;
    int day;
}pubTime;

typedef struct _user{   //用户信息
    int id;
    char name[50];
    pubTime birth;  //结构体嵌套
    char sex;
    double weight;
}User;



//声明显示函数
void Show(void);

//声明手动输入函数;
void Input();


#endif // DEMO_H_INCLUDED
