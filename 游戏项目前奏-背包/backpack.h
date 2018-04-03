#ifndef BACKPACK_H_INCLUDED
#define BACKPACK_H_INCLUDED

//��Ʒ�ṹ��
typedef struct _prop{
    int id;         //���
    char name[50];  //��Ʒ����
    double price;   //�۸�
    int stock;      //��棬����������ڣ�����ӣ���������ڣ�����
    char desc[200]; //����
}Prop;

//����
typedef struct _bag{
    int playId;     //��ұ��
    int count;      //��ǰ������������
    int max;        //��������
    Prop prop[8];      //��ǰ�����еĵ���
}Bag;


//���
typedef struct _paly{
    int id;     //id
    char name[50];      //�ǳ�
    char pass[50];      //����
    Bag  bag;           //����
    double gold;        //���
    double sysee;       //Ԫ�� ��ֵ
}Player;
//��ʼ������
void Init();

//����������������ʾ����
void ShowProps();
//����������������ʾ���
void ShowPlays();

//��ҽ���  ���׵����(һ����ָ�뷽ʽ) ����Ʒ��Ϊ����
void Trade(Player *p,int propId);
#endif // BACKPACK_H_INCLUDED
