#ifndef DEMO_H_INCLUDED
#define DEMO_H_INCLUDED

//����ṹ��
typedef struct _time{   //����ʱ��
    int year;
    int month;
    int day;
}pubTime;

typedef struct _user{   //�û���Ϣ
    int id;
    char name[50];
    pubTime birth;  //�ṹ��Ƕ��
    char sex;
    double weight;
}User;



//������ʾ����
void Show(void);

//�����ֶ����뺯��;
void Input();


#endif // DEMO_H_INCLUDED
