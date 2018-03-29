#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * 结构体: 是C语言中用户自定义的一种数据类型
 * 在结构体种 可以声明 数组 指针 整形等变量
 * 结构体一定要定义在 头文件下面
 *  类型:不分配内存； 变量:分配内存
    类型:不能赋值、存取、运算; 变量:可以
    结构体可嵌套
    结构体成员名与程序中变量名可相同，不会混淆
 */
//结构体
struct Hello{
    int id;         //id
    char sex;       //性别
    char name[50];    //姓名
};

//指针结构体
struct Hello1{
    int id;         //id
    char sex;       //性别
    char *name;    //姓名
};

/* 第2种
    struct Hello{
        int id;         //id
        char sex;       //性别
        char name[];    //姓名
    }hello1,hello2;
*/
/* 第3种
    struct Hello{
        int id;         //id
        char sex[];       //性别
        char name[];    //姓名
    };
    struct Hello hello1,hello2;
*/


//嵌套
struct Martial{     //门派结构体
    int id;         //id
    char name[50];  //名称
    char desc[100]; //简介
    int count;      //人数
    int type;       //类型 1.名门正派，2.中立、3.邪门
};

struct Player{      //玩家结构体
    int id;         //id
    char name[50];  //姓名
    char sex;       //性别
    struct Martial martial; //门派信息
};
int main()
{

    //初始化嵌套的结构体
    struct Player p1 ={1,"天下第一",'f',{1,"少林",500,3}};
    printf("%s\t %s\n",p1.name, p1.martial.name);

    //要使用指针，首先要为指针分配空间
    /*
    1、使用结构体
    struct Hello h1 = {1,'m',"小星星"};
    */
    /*
    2、使用结构体
    struct Hello h1;
    h1.id = 1;
    h1.sex= 'f';
    //由于 name是定义好的字符串，必须复制字符串到name;
    strcpy(h1.name,"大猩猩");
    */
    /*
    //越过中间某个值进行赋值
    struct Hello h1={.id=1,.name="我飞跃了"};
    */
    /*
    //指针类型用这种类型赋值
    struct Hello1 h1={1,'m',"指针类型"};
    //如果动态赋值 用scanf赋值会出问题，因为没有分配内存，
    //需要 h1.name = (char*) malloc(50); 初始化内存 记得 ffree
    printf("%d\t %c\t %s\n",h1.id,h1.sex,h1.name);
    */




    return 0;
}
