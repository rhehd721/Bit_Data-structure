//
//#include <stdio.h>
//#pragma warning(disable:4996) //���� ���� ��밡��
//#include<time.h>
//#include<stdlib.h>
//#include <string.h>
//#include<assert.h>
//
//// �ڷḦ ���� struct
//typedef struct _list
//{
//	int num;
//	struct _list* next;
//	struct _list* pre;
//
//}list;
//
//
//int sort(const void* a, const void* b)
//{
//	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//
//	if (num1 < num2)    // a�� b���� ���� ����
//		return -1;      // -1 ��ȯ
//
//	if (num1 > num2)    // a�� b���� Ŭ ����
//		return 1;       // 1 ��ȯ
//
//	return 0;    // a�� b�� ���� ���� 0 ��ȯ
//
//	//return ((int*)a - (int*)b);
//}
//
//main() {
//
//	//���� �����
//
//	srand(time(NULL));
//
//	// �ڷᱸ���� �̿��� ����Ʈ ���� �����
//	list* fault[10];
//
//	// ����Ʈ �����ϳ��ϳ� ���� �޸� �ֱ�
//	for (int i = 0; i < 10; ++i) {
//		fault[i] = (int)malloc(sizeof(list));
//	}
//
//	// ó���� ���� ����
//	fault[0]->next = fault[1];
//	fault[9]->pre = fault[8];
//
//	// �����Ϳ� ���� ����ֱ�
//	for (int i = 0; i < 10; ++i) {
//			fault[i]->num = (rand() % 10) + 1;
//			for (int j = 0; j < i; ++j) {
//				if ((fault[i]->num) == (fault[j]->num)) {
//					fault[i]->num = (rand() % 10) + 1;
//					j = 0;
//				}
//			}
//			if (i < 9) {
//				fault[i]->pre = fault[i - 1];
//				fault[i]->next = fault[i + 1];
//			}
//	}
//
//
//
//	// �������� ���� sort�ϱ�
//	qsort(fault, 10, sizeof(list*), sort);
//
//	printf("\n/*fault �߻���*/\n");
//	for (int i = 0;i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//
//	printf("\n/*fault �߻���*/\n");
//
//
//
//	printf("\n/*upright �Լ�*/\n");
//
//
//
//}