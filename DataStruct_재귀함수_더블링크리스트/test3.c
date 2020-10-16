#pragma warning(disable:4996) //이전 문법 사용가능
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include<assert.h>

// 자료를 담을 struct
struct _list
{
	int num;
	int* next;
	int* pre;
};

typedef struct _list List;


int sort(const void*a, const void*b)
{
	//int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	//int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num1 = (*(List**)a)->num;
	int num2 = (*(List**)b)->num;

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
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

	//난수 만들기

	srand(time(NULL));
	
	List* fault[10];


	// 동적할당 + 랜덤값 넣어주기
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

	// pre, next 연결해주기
	for (int i = 0; i < 9; ++i) {
		fault[i]->next = fault[i + 1];
		for (int j = 9; j > 0; --j) {
			fault[i]->pre = fault[i - 1];
		}
	}
	fault[9]->next = fault[0];
	fault[0]->pre = fault[9];

	printf("\n\n/*fault 발생전*/\n\n");

	// 받은 랜덤값 출력
	printf("랜덤값 받기 : ");
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}
	printf("\n");

	// 퀵정렬을 통해 sort하기
	qsort(fault, 10, sizeof(List*), sort);

	// 정렬된 랜덤값 출력
	printf("Q_sort 출력 : ");
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}
	printf("\n");

	printf("\n\n/*fault 발생후*/\n\n");

	// 랜덤값을 받고 next 주소 바꾸기
	printf("랜덤으로 끊기 : ");
	int random = rand() % 10;
	quit(fault[random], fault[rand()%10]);
	for (int i = 0; i <= random; ++i) {
		printf("%3d", fault[i]->num);
	}

	// next 다시 연결해주기
	printf("\n");
	printf("next다시 연결 : ");
	join(fault);
	for (int i = 0; i < 10; ++i) {
		printf("%3d", fault[i]->num);
	}



	//printf("\n/*upright 함수*/\n");



}