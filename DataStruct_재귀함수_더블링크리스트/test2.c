//#pragma warning(disable:4996) //이전 문법 사용가능
//#include<time.h>
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include<assert.h>
//
//// 자료를 담을 struct
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
//	//난수 만들기
//
//	srand(time(NULL));
//
//	int random = rand();
//
//	List* fault[10];
//
//
//	// 동적할당 + 랜덤값 넣어주기
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
//	// pre, next 연결해주기
//	for (int i = 0; i < 9; ++i) {
//		fault[i]->next = fault[i + 1];
//		for (int j = 9; j > 0; --j) {
//			fault[i]->pre = fault[i - 1];
//		}
//	}
//
//	// 시험출력
//	for (int i = 0; i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//	
//
//	printf("\n\n\n\n");
//
//
//	// 퀵정렬을 통해 sort하기
//	qsort(fault,10, sizeof(List*), sort);
//
//	// 시험출력
//	for (int i = 0; i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//
//	//printf("\n/*fault 발생전*/\n");
//	//
//
//	//printf("\n/*fault 발생후*/\n");
//
//
//
//	//printf("\n/*upright 함수*/\n");
//
//
//
//}