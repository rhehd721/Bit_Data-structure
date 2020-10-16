//#include<stdio.h>
//#pragma warning(disable:4996) //이전 문법 사용가능
//
//#include<time.h>
//#include<stdlib.h>
//
//#include<assert.h>
//
////#define swap(a,b) do{int t; t=a; a=b; b=t;}while(0)
//
//void printInt(int* arr, int size);
//void printDbl(double* arr, int size);
//void printstr(double(*arr)[10], int size);
//
//int comp_i(const void* a, const void* b) {
//	return (*(int*)a - *(int*)b);
//}
//
////라이브러리 제공하는 qsort를 위한 comp_d 함수 완성
//int comp_d(const void* a, const void* b) {
//	if ((*(double*)a > * (double*)b)) {
//		return 1;
//	}
//	else if ((*(double*)a < *(double*)b)) {
//		return -1;
//	}
//	else
//		return 0;
//}
//
////라이브러리 제공하는 qsort를 위한 comp_s 함수 완성
//int comp_s(const void* a, const void* b) {
//
//	return strcmp((char*)a, (char*)b);
//
//}
//
//
//
//
//int main(void) {
//	int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
//	double arrd[] = { 3.2, 5.6, 4.3, 8.7, 2.3, 4.5, 2.1, 2.3, 4.6, 4.5 };
//	char arrs[][7] = { "방소연","신정규","이승현","김진현",
//		"박병호","이천우","박세훈","위인섭",
//		"김민이","유세헌","이경원","정민기"
//
//	};
//	qsort(arri, sizeof(arri) / sizeof(arri[0]), sizeof(int), comp_i);
//	printInt(arri, sizeof(arri) / sizeof(arri[0]));
//
//	qsort(arrd, sizeof(arrd) / sizeof(arrd[0]), sizeof(double), comp_d);
//	printDbl(arrd, sizeof(arrd) / sizeof(arrd[0]));
//
//	//라이브러리 qsort를 이용하여 2차원배열에 있는 문자열을 정렬합시다.
//
//	//qsort(arrs, sizeof(arrs) / sizeof(arrs[0]), sizeof(arrs[0]), comp_s);
//	//printstr(arrs, sizeof(arrs) / sizeof(arrs[0]));
//
//	return 0;
//}
//void printInt(int* arr, int size) {
//	int dx = 0;
//	for (dx = 0; dx < size; ++dx) {
//		printf("%d ", arr[dx]);
//	}
//	printf("\n");
//}
//
//void printDbl(double* arr, int size) {
//	int dx = 0;
//	for (dx = 0; dx < size; ++dx) {
//		printf("%.1f  ", arr[dx]);
//	}
//	printf("\n");
//}
//
//void printstr(double(*arr)[10], int size) {
//	int dx = 0;
//	for (dx = 0; dx < size; ++dx) {
//		printf("%s ", arr[dx]);
//	}
//	printf("\n");
//}

/* 틀린거임
int partition(int arr[], int s, int e)
{
	int big, small, pivot;
	big = s;
	small = e + 1;
	pivot = arr[big];
	while (big < small) {

		//pivot보다 큰값을 찾는 구문
		while (arr[++big] <= pivot);

		//pivot 보다 작거나 같은 값을 찾는 구문
		while (arr[--small] > pivot);

		if (big < small) {
			swap(arr[big], arr[small]);
		}
	}
	swap(arr[s], arr[small]);
	return small;
}
void MYqsort(int arr[], int s, int e)
{
	int mid;
	if (s < e) {
		mid = partition(arr, s, e);
		qsort(arr, s, mid - 1);
		qsort(arr, mid + 1, e);
	}
}

main()
{
	int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
	MYqsort(arri, 0, 9);
	int dx;
	for (dx = 0; dx < 10; dx++) {
		printf("%d", arri[dx]);
	}
}
*/


/*  
struct engine {
	int piston;
	int fan;
	int pipe;
};

struct car {
	struct engine* sedan, * sports;

};

void hyundai(struct car* man) {
	struct  engine* p = man->sedan;
	p->piston = 50;
	p->fan = 30;
	p->pipe = 20;
}

main() {
	struct car hi;
	hi.sedan = (struct engine*)malloc(sizeof(struct engine));
	hyundai(&hi);
	

	printf("%d %d %d \n", hi.sedan->piston, hi.sedan->fan, hi.sedan->pipe);
}
*/

/*
// 자료구조 linked_list


struct _list {
	int key;
	struct _list* next;
};

typedef struct _list List;

List* head, * tail; //양쪽 기둥의 이름

void init_list(void) // 초기화 과정 (2개의 빨래 기둥, 1개의 줄을 만드는 과정)
{
	head = (List*)malloc(sizeof(List));
	tail = (List*)malloc(sizeof(List));
	head->next = tail;
	tail->next = tail;

}

void delete_list(int del) {
	List* wk;
	List* kill;
	wk = head; // wk = head -> next;

	while (wk->next->key != del && wk->next != tail) {
		wk = wk->next;
	}

	kill = wk->next;
	wk->next = wk->next->next;
	free(kill);
}

void insert_list(int data) {
	List* nw;
	nw = (List*)malloc(sizeof(List));
	nw->key = data;

	nw->next = head->next;
	head->next = nw;

}

void view_list(void) {
	List* wk;

	while (wk != tail) { //꼬리가아니면 돌아가라

		printf("%d\n", wk->key);
		wk = wk->next;
	}

	//wk = head->next; // 첫번째 빨래를 보겠다
	//printf("%d\n", wk->key);

	//wk = wk->next; // 옆집으로 이사
	//printf("%d\n", wk->key);
}

void find_list(int fd) {
	List* wk;
	wk = head->next;
	while (wk != tail) { //꼬리가아니면 돌아가라
		if (wk == fd) {
			printf("데이터가 있다\n");
		}
		wk = wk->next;

	}

}

void ordered_insert(int data) {
	List* wk;
	List* pre;
	pre = head;
	wk = head->next;
	while (wk->key <= data && wk != tail) {
		pre = pre->next;
		wk = wk->next;
	}
	List* nw;
	nw = (List*)malloc(sizeof(List));
	nw->key = data;
	nw->next = wk;
	pre->next = nw;

}

void movetofron(int data) {

	List* wk;
	List* kill;
	wk = head; // wk = head -> next;

	while (wk->next->key != data && wk->next != tail) {
		wk = wk->next;
	}

	kill = wk->next;
	wk->next = wk->next->next;
	
	kill = head->next;
	head->next = kill;

}

main() {
	init_list(); // 초기화 작업
	insert_list(7);
	insert_list(3);

	view_list(); // 리스트 보여주기
	find_list(7); // 리스트 찾아보기
	puts("");
	delete_list(7); // head - 3 - 7 - tail
					// head - 3 - tail
	view_list();
	puts("");
	ordered_insert(1);
	ordered_insert(3);
	ordered_insert(7);
	ordered_insert(5);
	ordered_insert(2);
	view_list();
	puts("");

	movetofron(5);
	view_list();
	puts("");
}
*/