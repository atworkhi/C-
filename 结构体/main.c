#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * �ṹ��: ��C�������û��Զ����һ����������
 * �ڽṹ���� �������� ���� ָ�� ���εȱ���
 * �ṹ��һ��Ҫ������ ͷ�ļ�����
 *  ����:�������ڴ棻 ����:�����ڴ�
    ����:���ܸ�ֵ����ȡ������; ����:����
    �ṹ���Ƕ��
    �ṹ���Ա��������б���������ͬ���������
 */
//�ṹ��
struct Hello{
    int id;         //id
    char sex;       //�Ա�
    char name[50];    //����
};

//ָ��ṹ��
struct Hello1{
    int id;         //id
    char sex;       //�Ա�
    char *name;    //����
};

/* ��2��
    struct Hello{
        int id;         //id
        char sex;       //�Ա�
        char name[];    //����
    }hello1,hello2;
*/
/* ��3��
    struct Hello{
        int id;         //id
        char sex[];       //�Ա�
        char name[];    //����
    };
    struct Hello hello1,hello2;
*/


//Ƕ��
struct Martial{     //���ɽṹ��
    int id;         //id
    char name[50];  //����
    char desc[100]; //���
    int count;      //����
    int type;       //���� 1.�������ɣ�2.������3.а��
};

struct Player{      //��ҽṹ��
    int id;         //id
    char name[50];  //����
    char sex;       //�Ա�
    struct Martial martial; //������Ϣ
};
int main()
{

    //��ʼ��Ƕ�׵Ľṹ��
    struct Player p1 ={1,"���µ�һ",'f',{1,"����",500,3}};
    printf("%s\t %s\n",p1.name, p1.martial.name);

    //Ҫʹ��ָ�룬����ҪΪָ�����ռ�
    /*
    1��ʹ�ýṹ��
    struct Hello h1 = {1,'m',"С����"};
    */
    /*
    2��ʹ�ýṹ��
    struct Hello h1;
    h1.id = 1;
    h1.sex= 'f';
    //���� name�Ƕ���õ��ַ��������븴���ַ�����name;
    strcpy(h1.name,"������");
    */
    /*
    //Խ���м�ĳ��ֵ���и�ֵ
    struct Hello h1={.id=1,.name="�ҷ�Ծ��"};
    */
    /*
    //ָ���������������͸�ֵ
    struct Hello1 h1={1,'m',"ָ������"};
    //�����̬��ֵ ��scanf��ֵ������⣬��Ϊû�з����ڴ棬
    //��Ҫ h1.name = (char*) malloc(50); ��ʼ���ڴ� �ǵ� ffree
    printf("%d\t %c\t %s\n",h1.id,h1.sex,h1.name);
    */




    return 0;
}
