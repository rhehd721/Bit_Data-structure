//#include<stdio.h>
//#pragma warning(disable:4996) //���� ���� ��밡��
//
//#include<time.h>
//#include<stdlib.h>
//
//#include<assert.h>
//
////// �ڷᱸ�� list
////typedef struct _list List;
////
////struct _list {
////	int key;
////	struct _list* next;
////};
////
////List* head, * tail; //���� ����� �̸�
////
////main() {
////	printf("%d", List);
////	
////	}
//
//
//// �ڷᱸ�� list
//
//
//struct _list {
//	int key;
//	struct _list* next;
//};
//
//typedef struct _list List;
//
//List* head, * tail; //���� ����� �̸�
//
//void init_list(void) // �ʱ�ȭ ���� (2���� ���� ���, 1���� ���� ����� ����)
//{
//	head = (List*)malloc(sizeof(List));
//	tail = (List*)malloc(sizeof(List));
//	head->next = tail;
//	tail-> next = tail;
//
//}
//
//void delete_list(int del) {
//	List* wk;
//	List* kill;
//	wk = head; // wk = head -> next;
//
//	while (wk->next->key != del && wk -> next != tail) {
//		wk = wk->next;
//	}
//
//	kill = wk->next;
//	wk->next = wk->next->next;
//	free(kill);
//}
//
//void insert_list(int data) {
//	List* nw;
//	nw = (List*)malloc(sizeof(List));
//	nw->key = data;
//
//	nw->next = head->next;
//	head->next = nw;
//
//}
//
//void view_list(void) {
//	List* wk;
//
//	while (wk != tail) { //�������ƴϸ� ���ư���
//
//		printf("%d\n", wk->key);
//		wk = wk->next;
//	}
//
//	//wk = head->next; // ù��° ������ ���ڴ�
//	//printf("%d\n", wk->key);
//
//	//wk = wk->next; // �������� �̻�
//	//printf("%d\n", wk->key);
//}
//
//void find_list(int fd) {
//	List* wk;
//	wk = head->next;
//	while (wk != tail) { //�������ƴϸ� ���ư���
//		if (wk == fd) {
//			printf("�����Ͱ� �ִ�\n");
//		}
//		wk = wk->next;
//		
//	}
//
//}
//
//main() {
//	init_list(); // �ʱ�ȭ �۾�
//	insert_list(7);
//	insert_list(3);
//
//	view_list(); // ����Ʈ �����ֱ�
//	find_list(7); // ����Ʈ ã�ƺ���
//	puts("");
//	delete_list(7); // head - 3 - 7 - tail
//					// head - 3 - tail
//
//}#include<stdio.h>
//#pragma warning(disable:4996) //���� ���� ��밡��
//
//#include<time.h>
//#include<stdlib.h>
//
//#include<assert.h>
//
////// �ڷᱸ�� list
////typedef struct _list List;
////
////struct _list {
////	int key;
////	struct _list* next;
////};
////
////List* head, * tail; //���� ����� �̸�
////
////main() {
////	printf("%d", List);
////	
////	}
//
//
//// �ڷᱸ�� list
//
//
//struct _list {
//	int key;
//	struct _list* next;
//};
//
//typedef struct _list List;
//
//List* head, * tail; //���� ����� �̸�
//
//void init_list(void) // �ʱ�ȭ ���� (2���� ���� ���, 1���� ���� ����� ����)
//{
//	head = (List*)malloc(sizeof(List));
//	tail = (List*)malloc(sizeof(List));
//	head->next = tail;
//	tail-> next = tail;
//
//}
//
//void delete_list(int del) {
//	List* wk;
//	List* kill;
//	wk = head; // wk = head -> next;
//
//	while (wk->next->key != del && wk -> next != tail) {
//		wk = wk->next;
//	}
//
//	kill = wk->next;
//	wk->next = wk->next->next;
//	free(kill);
//}
//
//void insert_list(int data) {
//	List* nw;
//	nw = (List*)malloc(sizeof(List));
//	nw->key = data;
//
//	nw->next = head->next;
//	head->next = nw;
//
//}
//
//void view_list(void) {
//	List* wk;
//
//	while (wk != tail) { //�������ƴϸ� ���ư���
//
//		printf("%d\n", wk->key);
//		wk = wk->next;
//	}
//
//	//wk = head->next; // ù��° ������ ���ڴ�
//	//printf("%d\n", wk->key);
//
//	//wk = wk->next; // �������� �̻�
//	//printf("%d\n", wk->key);
//}
//
//void find_list(int fd) {
//	List* wk;
//	wk = head->next;
//	while (wk != tail) { //�������ƴϸ� ���ư���
//		if (wk == fd) {
//			printf("�����Ͱ� �ִ�\n");
//		}
//		wk = wk->next;
//		
//	}
//
//}
//
//main() {
//	init_list(); // �ʱ�ȭ �۾�
//	insert_list(7);
//	insert_list(3);
//
//	view_list(); // ����Ʈ �����ֱ�
//	find_list(7); // ����Ʈ ã�ƺ���
//	puts("");
//	delete_list(7); // head - 3 - 7 - tail
//					// head - 3 - tail
//
//}