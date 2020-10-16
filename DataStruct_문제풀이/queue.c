//
//#include <stdio.h>
//#pragma warning(disable:4996) //이전 문법 사용가능
//#include<time.h>
//#include<stdlib.h>
//#include <string.h>
//#include<assert.h>
//
//// 자료를 담을 struct
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
//	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//
//	if (num1 < num2)    // a가 b보다 작을 때는
//		return -1;      // -1 반환
//
//	if (num1 > num2)    // a가 b보다 클 때는
//		return 1;       // 1 반환
//
//	return 0;    // a와 b가 같을 때는 0 반환
//
//	//return ((int*)a - (int*)b);
//}
//
//main() {
//
//	//난수 만들기
//
//	srand(time(NULL));
//
//	// 자료구조를 이용한 포인트 변수 만들기
//	list* fault[10];
//
//	// 포인트 변수하나하나 동적 메모리 넣기
//	for (int i = 0; i < 10; ++i) {
//		fault[i] = (int)malloc(sizeof(list));
//	}
//
//	// 처음과 끝을 연결
//	fault[0]->next = fault[1];
//	fault[9]->pre = fault[8];
//
//	// 포인터에 난수 집어넣기
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
//	// 퀵정렬을 통해 sort하기
//	qsort(fault, 10, sizeof(list*), sort);
//
//	printf("\n/*fault 발생전*/\n");
//	for (int i = 0;i < 10; ++i) {
//		printf("%3d", fault[i]->num);
//	}
//
//	printf("\n/*fault 발생후*/\n");
//
//
//
//	printf("\n/*upright 함수*/\n");
//
//
//
//}