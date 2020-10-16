/*
#include<stdio.h>
#include<assert.h>
#define STACK_SIZE 5

typedef struct _tree Tree;

struct _tree {
	int key;
	struct _tree* left;
	struct _tree* right;

};

void in_order(Tree* p) {	// 중위순회
	if (p != NULL) {
		in_order(p->left);
		printf("%3d", p->key);
		in_order(p->right);
	}
}

void post_order(Tree* p) {	// 후위순회
	if (p != NULL) {
		post_order(p->left);
		post_order(p->right);
		printf("%3d", p->key);
	}
}

void pre_order(Tree* p) {	// 전위순회
	if (p != NULL) {
		printf("%3d", p->key);
		pre_order(p->left);
		pre_order(p->right);
	}
}

Tree* Stack[STACK_SIZE];
int top;


stack_init() {
	top = -1;
}

void push(Tree* data) { //값을 증가하고 자료를 넣는다
	//다 넣은 상태에서 또 넣을때 에러,,,,
	//stack overflow발생
	if (top >= STACK_SIZE - 1) {
		puts("stack overflow");
		return; //void형태의 함수를 중간에 멈출때
	}

	Stack[++top] = data;
}

Tree* pop() { // 자료를 빼고 값을 뺀다
	//다 뺸 상태에서 또 뻇을때 에러,,,,

	if (top < 0) {
		puts("stack underflow");
		return -1; //void형태의 함수를 중간에 멈출때
	}

	Tree* rlt;
	rlt = Stack[top--];
	return rlt;
}


int stack_empty() { // 비어있으면 1를 리턴 아니면 0을 리턴
	if (top < 0) {
		puts("stack underflow");
		return 1;
	}
	else {
		return 0;
	}
}


void pre_order_stack(Tree* p) {
	stack_init(); // 많이 까먹는것중 하나로 무조건 초기화를 해줘야한다
	//루트를 push

	push(p);
	//비어있지 않으면
	while (!stack_empty()) {
		p = pop();
		//pop 한후 출력하고
		if (p != NULL) {
			printf("%3d", p->key);
			push(p->right);
			push(p->left);
		}
		//우좌측 자식을 push
	}

}

void in_order_stack(Tree* p) {
	stack_init(); // 많이 까먹는것중 하나로 무조건 초기화를 해줘야한다
	while (1) {

		while (p != NULL) {
			//스택에 푸쉬
			push(p);

			//왼쪽자식이 없을때까지 푸쉬
			p = p->left;
		}

		//비어있지 않으면 
		if (!stack_empty()) { //pop한 후 오른쪽 자식을
			p = pop();
			printf("%3d", p->key);
			p = p->right;

		}
		else { //스텍이 비어있다면
			break;
		}
	}
}

void post_order_stack(Tree* p) {

	stack_init(); // 많이 까먹는것중 하나로 무조건 초기화를 해줘야한다
	while (p != NULL) {
		//스택에 푸쉬
		push(p);

		//왼쪽자식이 없을때까지 푸쉬
		p = p->left;
	}

	//비어있지 않으면 
	if (!stack_empty()) { //pop한 후 오른쪽 자식을
		p = pop();
		printf("%d", p->key);
		p = p->right;

	}
	//pop한 후 오른쪽 자식을 스텍에 푸쉬(왼쪽 자식이 없을때까지)

}

///여기부터 망헀다....
#define Q_SIZE 5

Tree* queue[Q_SIZE];
int front, rear;

void init_queue(void) {
	front = rear = 0;
}

void put(Tree* data) { // rear 위치에 넣는다
	if ((rear + 1) % 5 == front) {
		printf("\noverflow가 발생하였습니다\n");
		return;
	}
	queue[rear++] = data;
	rear = ++rear % 5;

}

Tree* get(void) {  // front 위치로 부터 뺀다
	Tree* rlt;
	if (front == rear) {
		printf("\n 오류!!!!!! \n");
		return -1;
	}
	rlt = queue[front];
	front = ++front % 5;
	return rlt; //front 값이 있는 곳
}



level_order_queue(Tree* p) {
	//큐에 넣고(put) 비어있지 않으면 뺀다(get)
	put(p);
	while (!queue_empty()) {
		p = get(); // 뺀녀석의 좌 우측 노드를 넣는다(put)
		printf("%3d", p->key);
		if (p->left != NULL) {
			put(p->left);
		}

		if (p->right != NULL) {
			put(p->right);
		}
	}
	//뺀 녀석의 좌 우측 노드를 넣는다.(put)

}

main() {
	Tree a1 = { 1,NULL,NULL };
	Tree b2 = { 2,NULL,NULL };
	Tree c3 = { 3,NULL,NULL };
	Tree d4 = { 4,NULL,NULL };
	Tree e5 = { 5,NULL,NULL };
	Tree f6 = { 6,NULL,NULL };

	c3.left = &a1;
	a1.right = &b2;

	c3.right = &d4;
	d4.right = &e5;
	e5.right = &f6;

	puts("\npre_order\n");
	pre_order(&c3);
	puts("\nin_order\n");
	in_order(&c3);
	puts("\npost_order\n");
	post_order(&c3);
	puts("\npre_order_stack 스텍\n");

	pre_order_stack(&c3); // 우리가 만든 스텍사용
	puts("\nin_order_stack 스텍\n");
	in_order_stack(&c3); // 우리가 만든 스텍사용

	puts("\nQ 를 이용한\n"); // 우리가 만든 q를 사용한 층별순회
	level_order_queue(&c3);

}
*/

