/*
    �������㺯���������˶��ٴ�
*/
/*
//1
int counter();

int counter(){
    //����ɾ�̬���� ֻ�ڵ�һ������ʱ��ʼ�� count��ֵ ִֻ��һ��
    static int count = 0;
    count++;
    return count;
}
*/
//�����ⲿ���� main.c��whileCount
extern int whileCount;
void counter(int);
void counter(int i){
    static int subTotal = 0;    //��̬����
    subTotal++;
    printf("counter������������%d��\n",subTotal);
    printf("��ǰ��%d��\n",whileCount);
}
