/*
#include<stdio.h>

struct _list
{
	int num;
	int* pre;
	int* aft;
};

typedef struct _list List;

main() {
	List *one = (int)malloc(sizeof(List));
	List *two = (int)malloc(sizeof(List));
	List *tri = (int)malloc(sizeof(List));
	one->aft = two;
	two->pre = one;
	two->aft = tri;
	tri->pre = two;
	int tem = 3;
	two->num = tem;

	printf("%d", one->num);

}*/