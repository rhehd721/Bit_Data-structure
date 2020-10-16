#pragma warning(disable:4996) //���� ���� ��밡��
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include<assert.h>

// �ڷḦ ���� struct
struct _list
{
	int num;
	int* next;
	int* pre;
};

typedef struct _list List;


int sort(const void*a, const void*b)
{
	//int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	//int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num1 = (*(List**)a)->num;
	int num2 = (*(List**)b)->num;

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
}


void quit(List* fault1, List* fault2) {
	fault1->next = fault2;
}

void join(const void* fault) {
	for (int i = 0; i < 10; ++i) {
		if ((*(List**)fault + i)->next != ((List**)fault + (i+1))) {
			(*(List**)fault + i)->next = ((List**)fault + (i + 1));
			break;
		}
	}
}

main() {

	//���� �����

	srand(time(NULL));
	
	List* fault[10];


	// �����Ҵ� + ������ �־��ֱ�
	for (int i = 0; i < 10; ++i) {
		fault[i] = (List*)malloc(sizeof(List));
		fault[i]->num = rand() % 10;
		if (i > 0) {
			for (int j = 0; j < i; ++j) {
				if (fault[j]->num == fault[i]->num) {
					--i;
				}
			}
		}
	}

	// pre, next �������ֱ�
	for (int i = 0; i < 9; ++i) {
		fault[i]->next = fault[i + 1];
		for (int j = 9; j > 0; --j) {
			fault[i]->pre = fault[i - 1];
		}
	}
	fault[9]->next = fault[0];
	fault[0]->pre = fault[9];

	printf("\n\n/*fault �߻���*/\n\n");

	// ���� ������ ���
	printf("������ �ޱ� : ");
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}
	printf("\n");

	// �������� ���� sort�ϱ�
	qsort(fault, 10, sizeof(List*), sort);

	// ���ĵ� ������ ���
	printf("Q_sort ��� : ");
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}
	printf("\n");

	printf("\n\n/*fault �߻���*/\n\n");

	// �������� �ް� next �ּ� �ٲٱ�
	printf("�������� ���� : ");
	int random = rand() % 10;
	quit(fault[random], fault[rand()%10]);
	for (int i = 0; i <= random; ++i) {
		printf("%3d", fault[i]->num);
	}

	// next �ٽ� �������ֱ�
	printf("\n");
	printf("next�ٽ� ���� : ");
	join(fault);
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}



	//printf("\n/*upright �Լ�*/\n");



}