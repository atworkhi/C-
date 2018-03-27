#include <stdio.h>
#include <stdlib.h>
//����һ������
#define N 5
//��дһ��ϵͳ �������������¼�� ���� ��ӡ

//���� ¼�� ���� ��ӡ ����Ϊ����

void input(double nums[]);
void sort(double nums[]);
void show(double nums[]);
//����һ������ ���Ƿ�����������У���������򷵻� �±꣬������ ���� -1
int findNums(double *, double); //�������� �ֱ���Ҫ���ҵ����飬Ҫ���ҵ�����

int main()
{
    //��һ������ĳ��� ���� sizeof(������)/sizeof(������[0])
    int test[]={1,2,3,4,5,6,7,8,9};
    printf("���鳤���ǣ�%d\n",sizeof(test)/sizeof(test[0]));

    double n;    //��������
    double nums[N];
    //¼��
    input(nums);
    printf("����ǰ�����飺\n");
    show(nums);

    //����
    sort(nums);
    printf("���������飺\n");
    show(nums);


    //����
    printf("��������Ҫ���ҵ����֣�");
    scanf("\n%lf",&n);

    printf("���������ֵ�С��Ϊ%d\n",findNums(nums,n));

    printf("Hello world!\n");
    return 0;
}

//¼�뺯��
void input(double nums[]){
    int i;

    for(i=0; i<N; i++){
        printf("��������Ҫ¼�������ĵ�%dλ:",i+1);
        //scanf("%lf",&nums[i]);
        scanf("%lf",(nums+i));
    }
}

//ð������
void sort(double nums[]){
    int i,j;    //ð������ѭ������
    double temp;
    for(i=0; i<N-1;i++){
        for(j=0; j<N-i-1; j++){
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}
//��ʾ��ӡ
void show(double nums[]){
    int i;
    printf("-----------------------------------------------------\n");
    for(i=0; i<N; i++){
        //printf("%.2lf\t",nums[i]);
        printf("%.2lf\t",*(nums+i));
    }
    printf("\n-----------------------------------------------------\n");
}


int findNums(double nums[], double findNum){
    int i ;
    int numIndex = -1;
    for(i=0; i<N; i++){
        // findNum == *(nums + i)
        if(findNum == nums[i]){
            numIndex = i;
            break;
        }
    }

    return numIndex;
}
