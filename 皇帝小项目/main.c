#include <stdio.h>
#include <string.h>

#define MAX 6   //�����۱���
/*
 * �ʵ۵�������Ϸ
 * */
int main() {

    int i, j, temp;  //ѭ������ ��ʱ����
    int count = 5;  //���Ӹ���
    char empName[20];  //�ʵ�����
    int choise;     //ѡ�� 1234
    int searchIndex = -1;    //����һ�������������ж��Ƿ����
    char tempName[20];  //��ʱ����


    //����� Ĭ��5�� ��ѡһ��
    char names[MAX][20] = {"�Է���", "С��", "��ʩ", "����", "����"}; //����
    char levelNames[5][10] = {"����", "����", "����", "����", "�ʺ�"};   //�ȼ�
    int levels[MAX] = {2, 0, 1, 3, 3, -1};   //names��Ӧ�ĵȼ� -1 ΪԤ��λ��
    int loves[MAX] = {100, 100, 100, 100, 100, -1};    //�øж� Ĭ�ϳ�ʼ��Ϊ100

    printf("==========================================\n");
    printf("%-10s\t\t%-10s\t\t%-10s\n", "����", "��ν", "�øж�");
    for (i = 0; i < count; i++) {
        printf("%-10s\t\t%-10s\t\t%-10d\n", names[i], levelNames[levels[i]], loves[i]);
    }
    printf("==========================================\n");

    printf("�Ȼʼݱ����»ʵǻ�����Ϊ����һ����ţ�\n");
    //ע�⣺������Ϊ���ַ��������Բ��� &
    scanf("%s", empName);
    printf("%s�ݵ�����������������\n", empName);
    for (int day = 0; day < 10; day++) {
        printf("��%d��\n",day+1);
        printf("����Ͻ���ѡ�������\n");
        printf("1.�»ʵǻ�����ּѡ����\n");
        printf("2.�ʵ۷��ƣ��������ӣ�\n");
        printf("3.�ʵ������������乬��\n");
        printf("4.�ʵ��������ȥС���֣�\n");
        scanf("%d", &choise);    //�ʵ�ѡ��
        switch (choise) {
            case 1:
                //���ж����ӵĸ����Ƿ��Ѿ�����
                if (count < MAX) {
                    printf("���£�������ѡ��������������ˣ�����������ѡ���������ţ�\n");
                    scanf("%s", names[count]);
                    //���������ʼ��
                    levels[count] = 0; //�ȼ�
                    loves[count] = 100; //�øж�
                    count++;
                    //
                } else {
                    printf("���£���ס���ˣ�ע����ư���");
                }
                break;
            case 2: //�ַ������� ���� string.h
                printf("���£�������������׼��������λ���ӣ�\n");
                scanf("%s", tempName);
                //�ַ�������  strcmp  ���=0 ��ȣ� =1 ǰһ���ַ���>��һ�� =-1 ǰһ���ַ���<��һ��
                for (int i = 0; i < count; i++) {
                    if (strcmp(tempName, names[i]) == 0) {
                        searchIndex = i;
                        break;
                    }
                }
                if (searchIndex == -1) {
                    printf("���£����ǲ�������ˣ���û��������Ӱ�\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        if (strcmp(tempName, names[i]) == 0) {
                            loves[i] += 20; //�øж�+20
                            levels[i] = levels[i] >= 4 ? 4 : levels[i] + 1; //�ȼ��ǲ��Ǵ������ֵ������� ���� ����+1

                        } else {
                            loves[i] -= 10;  //δ��ѡ�еĺøжȶ���1011
                        }
                    }
                    searchIndex = -1; //�ָ�Ĭ��ֵ�������������
                }

                break;
            case 3: //ɾ������

                printf("���£���λ���������ˣ���Ҫ�����乬��\n");

                scanf("%s", tempName);

                for (int i = 0; i < count; i++) {
                    if (strcmp(tempName, names[i]) == 0) {
                        searchIndex = i;
                        break;
                    }
                }

                if (searchIndex == -1) {
                    printf("���Ͽ����Ժ��ˣ�ѹ����û����������龪һ��\n");
                } else {
                    for (i = searchIndex; i < count - 1; i++) {
                        //��Ҫstrcpy���� ʵ������ĸ�ֵ
                        strcpy(names[i], names[i + 1]);
                        loves[i] = loves[i + 1];
                        loves[i] = loves[i + 1];
                    }
                    searchIndex = -1; //�ָ�Ĭ��ֵ�������������
                    count--;
                }
                break;
            case 4:
                printf("444");
                break;
            default:
                printf("���ϣ������ذ�������û����ô���\n");
                break;
        }

        //��ӡ������ռ������ð������
        for (i = 0; i < count - 1; i++) {
            for (j = 0; j < count - i - 1; j++) {
                if (levels[j] < levels[j + 1]) {
                    //�������� ���� �øж�
                    temp = levels[j];
                    levels[j] = levels[j + 1];
                    levels[j + 1] = temp;

                    temp = loves[j];
                    loves[j] = loves[j + 1];
                    loves[j + 1] = temp;

                    strcpy(tempName, names[j]);
                    strcpy(names[j], names[j + 1]);
                    strcpy(names[j + 1], tempName);
                }
            }
        }

        printf("==========================================\n");
        printf("%-10s\t\t%-10s\t\t%-10s\n", "����", "��ν", "�øж�");
        for (i = 0; i < count; i++) {
            printf("%-10s\t\t%-10s\t\t%-10d\n", names[i], levelNames[levels[i]], loves[i]);
        }
        printf("==========================================\n");
    }


    return 0;
}