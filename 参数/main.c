#include <stdio.h>
#include <stdlib.h>

/*
//1����������  ��ֵ����
void change(int n){
    //���ú� change������numΪ10
    n++;
}


int main()
{
    //����һ��num
    int num = 9;
    //��ֵ���� change����
    change(num);
    //����num������Ϊ������������ main�е� num ����9
    printf("%d\n",num);
    return 0;
}
*/

//2.�������� ���ô���

void change(int *num);
//ָ��
void change(int *num){
    //��ָ��ָ������ݼ�1
    *num+=1;
}

int main(){
    int num = 9;
    //����change ��ȡ��ַ
    change(&num);
    //������ָ��ָ�� num 9,��change������Ѱָ�룬����ָ��ָ�������+1 ���� numֵ�Ѿ���+1
    printf("%d\n",num);
    return 0;
}
