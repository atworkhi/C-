#include <stdio.h>
//������Ƶ ����Ҫ����������� ��-lwinmm��
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
#include <string.h> //֧���ַ�������
//����
#define MAX 6

int main()
{


    //�ļ�����ֻ���ǲ����ļ� ֻ��Ϊwav
    //PlaySound(TEXT("sounds\\1.wav"),NULL,SND_FILENAME | SND_ALIAS | SND_LOOP);

    int i , j, temp;  //ѭ������
    int count = 5; //Ĭ�ϵ�������
    char ename[50];   //�������
    int choise;       //ѡ��
    int searchIndex = -1;   //���Ҵ����乬��
    char tempName[20];  //���Ƶ���ʱ����
    //ѡ�������� 6����6��������������20����
    char names[MAX][20]={"����","�����","�Է���","��ʩ","С��"};     //��ʼ�����
    //��������
    char levelNames[5][10]={"����","����","����","����","�ʺ�"};
    //�������ÿ�����ӵļ��� ����--���� -1����ռλ �������һ��
    int levels[MAX]={1,3,2,0,0,-1};
    //������Ӧ�øж� ��ʼΪ100
    int loves[MAX]={100,100,100,100,100,-1};

    printf("��\n");
    printf("����\t����\t�øж�\n");
    for(i=0;i<count;i++){
        printf("%s\t%s\t%d\n",names[i], levelNames[levels[i]], loves[i]);
    }
    printf("-----------------------------------------\n");

    printf("�������꣬������Լ���һ�����:");
    //�õ���� ��ע�ⲻ�� & ��Ϊ��char����
    scanf("%s",ename);
    printf("%s�ݵ���������꣡\n",ename);

    printf("1���»ʵǻ����ʵ�ѡ��\t\t(����)\n");
    printf("2���ʵ۷���;���Ұ���\t\t(�޸�)\n");
    printf("3���ʵ۴�ŭ��Ҫ�����������乬\t\t(ɾ��)\n");
    printf("4���ʵ�Ҫ��������������С���� �ٺٺ�\n");
    printf("%s ����������ѡ��:\n",ename);
    scanf("%d",&choise);
    switch(choise){
        case 1: //����
            if(count<MAX){
                printf("��������ѡ�������֣�");
                scanf("%s",names[count]);
                //���������һ����ʼ��
                levels[count]=0;    //����
                loves[count]=100;   //�øж�
                count++;
            }else{
                printf("���Ѿ������ˣ�ס������\n���ʧ��\n");
            }

            break;
        case 2: //���� --�޸�
            //�øж�+20,����+1 �����˺øжȼ�10
            //����
            printf("��������Ҫ���ҵ���������:");
            scanf("%s",tempName);
            //�ַ�������strcmp  ����<string.h>
            //strcmp =0 �ַ������  1 ǰһ�����ں�һ�� -1 ǰһ��С�ں�һ��
            for(i = 0; i < count; i++){
                if(strcmp(tempName,names[i]) == 0){
                    searchIndex = i;
                }
            }
            if(searchIndex==-1){
                printf("�����ǲ�����Ҫѡ���ˣ�����ʱ��û���������\n");
            }else{
                for(i = 0; i < count; i++){
                    //��������������
                    if(strcmp(tempName,names[i]) == 0){
                        loves[i] += 20;
                        //�����ܳ���4
                        levels[i] = levels[i] > 4 ? 4 : levels[i]+1;
                    }else
                        loves[i] -= 10;
                }
            }

            break;
        case 3: //ɾ��һ�� ������һ���ŵ�ǰ��

            printf("����,�ĸ����������ˣ���Ҫ�����乬��\n");

            scanf("%s",tempName);

            //ѭ������
            for(i = 0; i < count; i++){
                if(strcmp(tempName,names[i]) == 0){
                    //��¼�±�
                    searchIndex = i;
                    break;
                }
            }
            //��ʼֵָû���ҵ�
            if(-1 == searchIndex){
                printf("���Ͽ����Ժ��ˣ�ѹ����û����������龪һ��\n");
            }else{
                for(i=searchIndex;i<count-1;i++){
                        //��Ҫstrcpy���� ʵ������ĸ�ֵ
                        strcpy(names[i],names[i+1]);
                        loves[i]=loves[i+1];
                        loves[i]=loves[i+1];
                }
                count--;
            }
            break;
        case 4:
            printf("44444444444\n");
            break;
        default:
            printf("%s,��������ѡ�񰡣�������\n",ename);
    }

    //��ӡ������ռ������ð������
    for(i=0;i<count-1;i++){

        for (j = 0; j< count-i-1; j++) {

            if (levels[j] <levels[j+1]){
                    //�������� ���� �øж�
                temp=levels[j];
                levels[j]=levels[j+1];
                levels[j+1]=temp;

                temp= loves[j];
                loves[j]=loves[j+1];
                loves[j+1]=temp;

                strcpy(tempName,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempName);
            }
        }
    }
    printf("-----------------------------------------\n");
    printf("������֮��Ľ����\n");
    printf("����\t����\t�øж�\n");
    for(i=0;i<count;i++){
        printf("%s\t%s\t%d\n",names[i], levelNames[levels[i]], loves[i]);
    }
    printf("-----------------------------------------\n");




    return 0;
}
