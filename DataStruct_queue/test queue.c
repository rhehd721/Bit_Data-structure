#include <stdio.h>
#pragma warning(disable:4996) //���� ���� ��밡��
#include<time.h>
#include<stdlib.h>
#include <string.h>
#include<assert.h>

// �ڷḦ ���� struct
typedef struct _list
{
	int num;
	list* next;
	list* pre;

}list;


int sort(const void* a, const void* b)
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ

	//return ((int*)a - (int*)b);
}

main() {

	//���� �����

	srand(time(NULL));

	int random = rand();


	// �ڷᱸ���� �̿��� ����Ʈ ���� �����
	list *fault[10];

	// ����Ʈ �����ϳ��ϳ� ���� �޸� �ֱ�
	for (int i = 0; i < 10; ++i) {
		fault[i] = (int)malloc(sizeof(list));
	}
	
	//// �����Ϳ� ���� ����ֱ�
	//for (int i = 0; i < 10; ++i) { // ó���� ���� ����
	//	fault[0]->num = (random % 10) + 1;
	//	fault[0]->next = fault[1];
	//	fault[9]->pre = fault[8];

	//	if (i > 0 && i < 9) { // �߰��� �ִ� ������ �ߺ����� �ʵ��� ����
	//		fault[i]->num = (random % 10) + 1;
	//		for (int j = 0; j < i; ++j){
	//			if ((fault[i]->num) == (fault[j]->num)) {
	//				fault[i]->num = (random % 10) + 1;
	//				--j;
	//			}
	//			if (i < 9){
	//			fault[i]->pre = fault[i - 1];
	//			fault[i]->next = fault[i + 1];
	//			}
	//		}
	//	}
	//}


	fault[0]->num = 3;
	printf("\n test�� %d \n", fault[0]->num);
	fault[1]->num = 5;
	printf("\n test�� %d \n", fault[1]->num);
	fault[0]->next = fault[1];
	printf("\n test�� %d \n", fault[0]->next);


	
	
	
	





	// �������� ���� sort�ϱ�
	qsort(fault, 10, sizeof(list*), sort);

	//printf("\n/*fault �߻���*/\n");
	//for (int i = 0;i < 10; ++i) {
	//	printf("%3d", fault[i]->num);
	//}

	//printf("\n/*fault �߻���*/\n");



	//printf("\n/*upright �Լ�*/\n");



}