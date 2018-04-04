//
// Created by hanxx on 2018/4/3.
//

#ifndef JIANGHU_V0_1_GAME_H
#define JIANGHU_V0_1_GAME_H

/**
 * �ļ����� Game.h
 * ������  ����������Ϸ��һЩ���Ľṹ�ͺ���
 *
 * **/
#include <stdio.h>
#include <string.h>
#include <windows.h>

/*
 *  ��Ϸ �ṹ���� ����
 *  ��ҡ���ͼ��װ��������
 * */
//��Ϸ��������ö��
typedef enum _propType{
    Weapon, //����
    Armor,  //����
    Con,    //����Ʒ
    Card,   //��Ƭ
    Frag,   //��Ƭ
}PropType;

/*��Ϸ���� - ���������ߡ�����Ʒ������*/
typedef struct _prop{
    int id;         //���߱��
    char name[50];  //��������
    int leve;       //�ȼ�
    int stock;      //���
    double price;   //����
    PropType type;  //����
    union {         //���������� ��ѡһ
        int minattack; //������Ӧ����
        int mindefence;   //���� ������
        int minpower;      //����Ʒ��Ӧ������ֵ
    };
    union {         //���������� ��ѡһ
        int maxattack; //������Ӧ����
        int maxdefence;   //���� ������
        int maxpower;      //����Ʒ��Ӧ������ֵ
    };
    char desc[200];   //��������
}Prop;

/*��ͼ*/
typedef struct _map{
    int id; //��ͼ���
    char name[50];  //��ͼ����
    int minLevel;   //��ҽ������͵ȼ�
    COORD coord;    //��ͼ���� x y windous�Դ��ṹ��
    char desc[200]; //��ͼ����
}Map;

/*��������*/
void Init();    //��ʼ������
void Show();    //��ӡ����

#endif //JIANGHU_V0_1_GAME_H
