/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//다음 구조체포인터 배열을 라이브러리 qsort를 상용하여 name의 오름차순으로 정렬하시오
#pragma warning (disable:4996)


typedef struct _node node;
struct _node {
	char name[10];
	struct _node* next;
};
//int gg = 0;
int cmp_node(const void* a, const void* b)
{
	return (((node*)a)->name - ((node*)b)->name);
}
node* p, * q;
main()
{
	node* k[4];

	p = (node*)malloc(sizeof(node));
	strcpy(p->name, "ccc");
	p->next = NULL;
	q = (node*)malloc(sizeof(node));
	strcpy(q->name, "aaa");
	q->next = NULL;


	k[0] = p;
	k[1] = q;
	k[2] = (node*)malloc(sizeof(node));
	strcpy(k[2]->name, "bbb");
	qsort(k, 3, sizeof(node*), cmp_node);

	puts("\n-----");
	printf("%s\n", k[0]->name);
	printf("%s\n", k[1]->name);
	printf("%s\n", k[2]->name);
	
	printf("%c%c", -56, -2);
}
*/