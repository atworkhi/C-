#include <stdio.h>
#include <stdlib.h>
//define��ָ �궨��,���ö����������ͣ����ݵ��þ�����������
#define N 5
int main()
{
    /*
        ����һ������ 8��4��2��1��23��344��12
        1.ѭ���������ֵ
        2.������ĺ���ƽ��ֵ
        3.�����֣�����һ�����ж��Ƿ������������
    */
    int i;  //ѭ������
    int sum;    //���
    double avg; //ƽ����
    int find;   //�ж��Ƿ����
    int inuser; //�û��������
    int nums[]={8, 4, 2, 1, 23, 344, 12};
    //ѭ�����
    for(i=0;i<7;i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    //�����ƽ����
    for(i=0;i<7;i++){
        sum+=nums[i];
    }
    avg=sum / 7.0;
    printf("����ĺͣ�%d;ƽ������%.2lf\n",sum,avg);
    //�û�����һ��ֵ �ж��Ƿ������������
    printf("������һ�����֣�");
    scanf("%d",&inuser);
    for(i=0;i<7;i++){
        if(inuser==nums[i]){

            find=1;
            break;
        }else{
            find=2;
        }
    }
    if(find=1){
        printf("����%d���ڱ�������\n",inuser);
    }else{
        printf("����%d�����ڱ�������\n",inuser);
    }

    /*
        һά������ԣ�
        ����һ������Ϊ5�����飬ѭ������ɼ�������ӡ�ɼ���
    */
    /*
    int i;  //ѭ������
    double score[N];   //�ɼ� �����һ������
    for(i=0;i<N;i++){
        printf("������%d��ͬѧ�ĳɼ�:",i+1);
        scanf("%lf",&score[i]);
    }

    for(i=0;i<N;i++){
        printf("%d��ͬѧ�ĳɼ�Ϊ��%.2lf\n",i+1,score[i]);
    }
    */
    return 0;
}
