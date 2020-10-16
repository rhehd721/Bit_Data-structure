//#include<stdio.h>
//#pragma warning(disable:4996) //이전 문법 사용가능
//
//#include<time.h>
//#include<stdlib.h>
//
//#include<assert.h>
//
////// 자료구조 list
////typedef struct _list List;
////
////struct _list {
////	int key;
////	struct _list* next;
////};
////
////List* head, * tail; //양쪽 기둥의 이름
////
////main() {
////	printf("%d", List);
////	
////	}
//
//
//// 자료구조 list
//
//
//struct _list {
//	int key;
//	struct _list* next;
//};
//
//typedef struct _list List;
//
//List* head, * tail; //양쪽 기둥의 이름
//
//void init_list(void) // 초기화 과정 (2개의 빨래 기둥, 1개의 줄을 만드는 과정)
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
//	while (wk != tail) { //꼬리가아니면 돌아가라
//
//		printf("%d\n", wk->key);
//		wk = wk->next;
//	}
//
//	//wk = head->next; // 첫번째 빨래를 보겠다
//	//printf("%d\n", wk->key);
//
//	//wk = wk->next; // 옆집으로 이사
//	//printf("%d\n", wk->key);
//}
//
//void find_list(int fd) {
//	List* wk;
//	wk = head->next;
//	while (wk != tail) { //꼬리가아니면 돌아가라
//		if (wk == fd) {
//			printf("데이터가 있다\n");
//		}
//		wk = wk->next;
//		
//	}
//
//}
//
//main() {
//	init_list(); // 초기화 작업
//	insert_list(7);
//	insert_list(3);
//
//	view_list(); // 리스트 보여주기
//	find_list(7); // 리스트 찾아보기
//	puts("");
//	delete_list(7); // head - 3 - 7 - tail
//					// head - 3 - tail
//
//}#include<stdio.h>
//#pragma warning(disable:4996) //이전 문법 사용가능
//
//#include<time.h>
//#include<stdlib.h>
//
//#include<assert.h>
//
////// 자료구조 list
////typedef struct _list List;
////
////struct _list {
////	int key;
////	struct _list* next;
////};
////
////List* head, * tail; //양쪽 기둥의 이름
////
////main() {
////	printf("%d", List);
////	
////	}
//
//
//// 자료구조 list
//
//
//struct _list {
//	int key;
//	struct _list* next;
//};
//
//typedef struct _list List;
//
//List* head, * tail; //양쪽 기둥의 이름
//
//void init_list(void) // 초기화 과정 (2개의 빨래 기둥, 1개의 줄을 만드는 과정)
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
//	while (wk != tail) { //꼬리가아니면 돌아가라
//
//		printf("%d\n", wk->key);
//		wk = wk->next;
//	}
//
//	//wk = head->next; // 첫번째 빨래를 보겠다
//	//printf("%d\n", wk->key);
//
//	//wk = wk->next; // 옆집으로 이사
//	//printf("%d\n", wk->key);
//}
//
//void find_list(int fd) {
//	List* wk;
//	wk = head->next;
//	while (wk != tail) { //꼬리가아니면 돌아가라
//		if (wk == fd) {
//			printf("데이터가 있다\n");
//		}
//		wk = wk->next;
//		
//	}
//
//}
//
//main() {
//	init_list(); // 초기화 작업
//	insert_list(7);
//	insert_list(3);
//
//	view_list(); // 리스트 보여주기
//	find_list(7); // 리스트 찾아보기
//	puts("");
//	delete_list(7); // head - 3 - 7 - tail
//					// head - 3 - tail
//
//}