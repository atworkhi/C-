#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    ��������
    returnType funName(parm1;parm2....)
*/

//ʵ��demo
//1.����һ�����֣��������飬��������ҵ�����������ֵ��±꣬���û���򷵻� -1
int searchList();
//2. �������� ����ð���������
//C���Բ����������飬���ǿ�����ָ��ָ������
int *listSort(int n);
//3.�û��������롣���������ȷ������ȷ�����룬��������������ʾ�������������
int passworld(int n);

int main(){


    int searchIndex = searchList();
    printf("���ҳ��������±���: %d\n",searchIndex);  //����1

    int i;  //ѭ������
    int * prt_list = listSort(5);
    for(i = 0; i < 5; i++){
        printf("%d\t",*(prt_list + i));
    }
    //free �ͷ�
    free(prt_list);
    printf("\n");       //����2

    int pwd;
    pwd = passworld(123456);
    printf("������ȷ��%d",pwd);         //����3

    return 0;
}


int searchList(){
    int i, searchNum, searchIndex=-1;   //ѭ�����������ҵ������±�
    int nums[] ={22,33,44,55};    //����һ������
    printf("��������Ҫ���ҵ�����:");
    scanf("%d",&searchNum);
    //ѭ������
    for(i=0; i < 4; i++){
        //* (nums+i) ��ָ���ʾ ��ͬ nums[i]
        if(searchNum == *(nums+i) ){

            searchIndex = i;
            break;
        }
    }
    return searchIndex;
}

//��������
int * listSort(int n){
    int i,j;    //ѭ������
    //malloc���齨����heap���ϣ������꺯�����ڣ��������Ǹ�����������׵�ַ
    int* nums = (int *)malloc(sizeof(int)*n);
    int num ,temp;
    //ѭ����������
    for( i=0; i < n;i++ ){
        printf("����������ӵ����֣�");
        scanf("%d",&num);
        nums[i]=num;    //��ֵ
    }
    //�鿴���������
    printf("����ǰ�Ľ��\n");
    for(i = 0; i < n; i++){
        printf("%d\t", nums[i]);
    }
    printf("\n");
    //ð������
    for(i=0; i<n-1;i++){  //����ֿ�����
        for(j=0;j<n-i-1;j++){ // �ڲ���ƱȽϸ���
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("�����Ľ��\n");
    for(i = 0; i < 5; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    return nums;
}

int passworld(int n){
    int password;
    //��ʾ��������
    printf("����������6λ��������:");
    scanf("%d",&password);

    //�ж�
   while(password != n){
    printf("�������,����������:");
    scanf("%d",&password);
   }
   return password;
}
/*
//���㳤���κ�԰�����
//�����Ķ���
void calcCircle();  //Բ�����
void calcCuboid();  //�����ε����
//������ֵ
int evenSum();  //����1-100��ż����

//������ʵ��
void calcCircle(){
    double radial;  //�뾶
    double area;    //���
    printf("��������Ҫ�����Բ�İ뾶��");
    scanf("%lf",&radial);
    area = 3.14 * (pow(radial,2));
    printf("Բ�������%.2lf\n",area);
}

void calcCuboid(){
    double weight, height;  //����
    double area;    //���
    printf("�����볤�Ϳ��ֵ��");
    scanf("%lf %lf",&weight,&height);
    area = weight * height;
    printf("�����ε������%.2lf\n",area);
}

int evenSum(){
    int i, sum=0;   //ѭ����������ͽ��
    for(i=1;i<=100;i++){
        if(i%2 == 0){
            sum+=i;
        }
    }
    return sum;
}

//main����ú���
int main()
{

    int sum =evenSum(); //���ú���
    printf("1-100ż������%d\n",sum);

    calcCuboid();   //�����󳤷�������
    calcCircle();   //����Բ�����
    printf("Hello world!\n");
    return 0;
}
*/
