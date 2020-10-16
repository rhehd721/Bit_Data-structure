/*
#include<stdio.h>
#pragma warning(disable:4996) //이전 문법 사용가능
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define NDEBUG
//#include<assert.h>




typedef struct _tree Tree;
struct _tree {
	int key;
	struct _tree* left;
	struct _tree* right;
};



#define STACK_SIZE 5	

Tree* Stack[STACK_SIZE];
int top;
void stack_init(void)
{
	top = -1;
}
void push(Tree* data) {
	if (top >= STACK_SIZE - 1) {
		puts("stack overflow");
		return;
	}
	Stack[++top] = data;
}
Tree* pop() {
	if (top < 0) {
		puts("stack underflow");
		return -1;
	}
	Tree* rlt;
	rlt = Stack[top--];
	return rlt;
}

int stack_empty() {  //비어있으면 1를 리턴 아니면 0을 리턴
	if (top < 0) {
		puts("stack underflow");
		return 1;
	}
	else
		return 0;
}
#define Q_SIZE 5
Tree* queue[Q_SIZE];
int front, rear;

void init_queue(void) {
	front = rear = 0;
}
void put(Tree* data) { //rear위치에 넣는다
	if ((rear + 1) % 5 == front) {
		puts("queue overflow");
		return;
	}
	queue[rear] = data;   //rear 가 4일 때 증가하면 0(5가아닌)되게 하시오
	//if (rear == 5)
	//	rear = 0;
	rear = ++rear % 5;
}
////////////////////////////////////////////////우선순위 큐:힙(HEAP)<=TREE
Tree* get(void) { //front의 위치로 부터 뺀다.
	Tree* rlt;
	if (front == rear)
	{
		puts("\nQ empty");
		return -1;
	}
	rlt = queue[front];
	front = ++front % 5;
	return rlt;//front는 값이 있는 곳

}
int queue_empty() {  //비어있으면 1를 리턴 아니면 0을 리턴
	if (front == rear) { //top<0
		puts("queue underflow");
		return 1;
	}
	else
		return 0;
}
void pre_order(Tree* p) {
	if (p != NULL) {
		printf("%d ", p->key);
		pre_order(p->left);
		pre_order(p->right);
	}
}
void in_order(Tree* p) {
	if (p != NULL) {
		in_order(p->left);
		printf("%d ", p->key);
		in_order(p->right);
	}
}
void post_order(Tree* p) {
	if (p != NULL) {
		post_order(p->left);
		post_order(p->right);
		printf("%d ", p->key);
	}
}
void pre_order_stack(Tree* p)
{
	stack_init(); //많이 잊어버리는 코드
	//루트를 push	
	push(p);
	//비어있지 않으면
	while (!stack_empty()) //비어있지 않으면 0
	{
		p = pop();
		//pop한후 출력하고
		if (p != NULL)//우좌측 자식을 push
		{
			printf("%d ", p->key);
			push(p->right);
			push(p->left);
		}

	}
}

in_order_stack(Tree* p) //중위순회를 비재귀 //트리정렬
{
	stack_init();
	while (1)
	{
		while (p != NULL)
		{
			//스택에 푸쉬
			push(p);
			//왼쪽자식이 없을때까지 푸쉬
			p = p->left;
		}
		//비어있지 않으면
		if (!stack_empty())//pop한 후 오른쪽 자식을
		{
			p = pop();
			printf("%d ", p->key);
			p = p->right;
		}
		else //스택이 비어있다면
			break;

	}
}
void level_order_queue(Tree* p)
{
	//큐에 넣고(put) 비어있지 않으면 뺀다(get).
	put(p);
	while (!queue_empty())
	{
		p = get();//뺀녀석의 좌 우측 노드를 넣는다(put).
		printf("%d ", p->key);
		if (p->left != NULL) //왼쪽자식이 있다면
			put(p->left);
		if (p->right != NULL) //왼쪽자식이 있다면
			put(p->right);
	}

}


int depth_tree(Tree* p, int dep) {
	int l_dep, r_dep;
	l_dep = r_dep = dep;

	if (p->left != NULL) { // 왼쪽자신 존재경우
		l_dep = depth_tree(p->left, l_dep + 1);
	}
	if (p->right != NULL) { // 오른쪽자신 존재경우
		r_dep = depth_tree(p->right, r_dep + 1);
	}


	if (l_dep >= r_dep) {
		return l_dep;
	}
	else {
		return r_dep;
	}
}


main() {
	Tree a1 = { 1, NULL, NULL };
	Tree b2 = { 2, NULL, NULL };
	Tree c3 = { 3, NULL, NULL };
	Tree d4 = { 4, NULL, NULL };
	Tree e5 = { 5, NULL, NULL };
	Tree f6 = { 6, NULL, NULL };

	c3.left = &a1;                //c3

	a1.right = &b2;       //a1          d4

							  //b2           e5    

	c3.right = &d4;                           //f6
	d4.right = &e5;    //3 1 2 4 5 6
	e5.right = &f6;

	//pre_order(&c3);
	//puts("");
	//in_order(&c3);
	//puts("");
	//post_order(&c3);
	//puts("");

	//pre_order_stack(&c3); //우리가 만든 스택을 사용
	//puts("");	
	//
	//in_order_stack(&c3); //우리가 만든 스택을 사용
	//puts("");

	level_order_queue(&c3); //우리가 만든 q를 사용한 층별순회
	puts("");
	puts("");
	puts("");

	printf("depth : %d", depth_tree(&c3, 0));

	puts("");
	puts("");

	printf("L_depth : %d", depth_tree(c3.left, 0));

	puts("");
	puts("");

	printf("R_depth : %d", depth_tree(c3.right, 0));

	puts("");
	puts("");
}

*/






//#pragma warning (disable:4996)
//
//#define Q_SIZE 5
//int queue[Q_SIZE];
//int front, rear;
//
//void init_queue(void) {
//	front = rear = 0;
//}
//void put(int data) { //rear위치에 넣는다
//	if ((rear + 1) % 5 == front) {
//		puts("queue overflow");
//		return;
//	}
//	queue[rear] = data;   //rear 가 4일 때 증가하면 0(5가아닌)되게 하시오
//	//if (rear == 5)
//	//	rear = 0;
//	rear = ++rear % 5;
//}
//////////////////////////////////////////////////우선순위 큐:힙(HEAP)<=TREE
//int get(void) { //front의 위치로 부터 뺀다.
//	int rlt;
//	if (front == rear)
//	{
//		puts("\nQ empty");
//		return -1;
//	}
//	rlt = queue[front];
//	front = ++front % 5;
//	return rlt;//front는 값이 있는 곳
//
//}
//main()
//{
//	init_queue();
//	put(1); put(2);
//	printf("%d", get());  printf("%d", get());
//	put(3); put(4);
//	put(5); put(6);
//
//	printf("%d", get());  printf("%d", get());
//	//printf("\n%d %d", rear, front);
//
//	int i;
//	for (i = front; i != rear; i=++i%5)
//	{
//		printf("%d ", queue[i]);
//
//	}
//
//	
//
//
//
//}