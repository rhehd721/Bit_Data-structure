//#pragma warning(disable:4996) //���� ���� ��밡��
//#include<time.h>
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include<assert.h>
//
//// �ڷḦ ���� struct
//struct _list
//{
//	int num;
//	int* next;
//	int* pre;
//};
//
//typedef struct _list List;
//
//
//int sort(const void* a, const void* b)
//{
//	List* pt_a = (List*)a;
//	List* pt_b = (List*)b;
//
//	if (pt_a->num < pt_b->num) return -1;
//	else if (pt_a->num > pt_b->num) return 1;
//	else return 0;
//}
//
//
//main() {
//
//	//���� �����
//
//	srand(time(NULL));
//
//	int random = rand();
//
//	List* fault[10];
//
//
//	// �����Ҵ� + ������ �־��ֱ�
//	for (int i = 0; i < 10; ++i) {
//		fault[i] = (List*)malloc(sizeof(List));
//		fault[i]-> num = rand() % 10;
//		if (i > 0) {
//			for (int j = 0; j < i; ++j) {
//				if (fault[j]->num == fault[i]->num) {
//					--i;
//				}
//			}
//		}
//	}
//
//	// pre, next �������ֱ�
//	for (int i = 0; i < 9; ++i) {
//		fault[i]->next = fault[i + 1];
//		for (int j = 9; j > 0; --j) {
//			fault[i]->pre = fault[i - 1];
//		}
//	}
//
//	// �������
//	for (int i = 0; i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//	
//
//	printf("\n\n\n\n");
//
//
//	// �������� ���� sort�ϱ�
//	qsort(fault,10, sizeof(List*), sort);
//
//	// �������
//	for (int i = 0; i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//
//	//printf("\n/*fault �߻���*/\n");
//	//
//
//	//printf("\n/*fault �߻���*/\n");
//
//
//
//	//printf("\n/*upright �Լ�*/\n");
//
//
//
//}