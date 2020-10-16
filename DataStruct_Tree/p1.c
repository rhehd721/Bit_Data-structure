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

void in_order(Tree* p) {	// ������ȸ
	if (p != NULL) {
		in_order(p->left);
		printf("%3d", p->key);
		in_order(p->right);
	}
}

void post_order(Tree* p) {	// ������ȸ
	if (p != NULL) {
		post_order(p->left);
		post_order(p->right);
		printf("%3d", p->key);
	}
}

void pre_order(Tree* p) {	// ������ȸ
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

void push(Tree* data) { //���� �����ϰ� �ڷḦ �ִ´�
	//�� ���� ���¿��� �� ������ ����,,,,
	//stack overflow�߻�
	if (top >= STACK_SIZE - 1) {
		puts("stack overflow");
		return; //void������ �Լ��� �߰��� ���⶧
	}

	Stack[++top] = data;
}

Tree* pop() { // �ڷḦ ���� ���� ����
	//�� �A ���¿��� �� �P���� ����,,,,

	if (top < 0) {
		puts("stack underflow");
		return -1; //void������ �Լ��� �߰��� ���⶧
	}

	Tree* rlt;
	rlt = Stack[top--];
	return rlt;
}


int stack_empty() { // ��������� 1�� ���� �ƴϸ� 0�� ����
	if (top < 0) {
		puts("stack underflow");
		return 1;
	}
	else {
		return 0;
	}
}


void pre_order_stack(Tree* p) {
	stack_init(); // ���� ��Դ°��� �ϳ��� ������ �ʱ�ȭ�� ������Ѵ�
	//��Ʈ�� push

	push(p);
	//������� ������
	while (!stack_empty()) {
		p = pop();
		//pop ���� ����ϰ�
		if (p != NULL) {
			printf("%3d", p->key);
			push(p->right);
			push(p->left);
		}
		//������ �ڽ��� push
	}

}

void in_order_stack(Tree* p) {
	stack_init(); // ���� ��Դ°��� �ϳ��� ������ �ʱ�ȭ�� ������Ѵ�
	while (1) {

		while (p != NULL) {
			//���ÿ� Ǫ��
			push(p);

			//�����ڽ��� ���������� Ǫ��
			p = p->left;
		}

		//������� ������ 
		if (!stack_empty()) { //pop�� �� ������ �ڽ���
			p = pop();
			printf("%3d", p->key);
			p = p->right;

		}
		else { //������ ����ִٸ�
			break;
		}
	}
}

void post_order_stack(Tree* p) {

	stack_init(); // ���� ��Դ°��� �ϳ��� ������ �ʱ�ȭ�� ������Ѵ�
	while (p != NULL) {
		//���ÿ� Ǫ��
		push(p);

		//�����ڽ��� ���������� Ǫ��
		p = p->left;
	}

	//������� ������ 
	if (!stack_empty()) { //pop�� �� ������ �ڽ���
		p = pop();
		printf("%d", p->key);
		p = p->right;

	}
	//pop�� �� ������ �ڽ��� ���ؿ� Ǫ��(���� �ڽ��� ����������)

}

///������� ������....
#define Q_SIZE 5

Tree* queue[Q_SIZE];
int front, rear;

void init_queue(void) {
	front = rear = 0;
}

void put(Tree* data) { // rear ��ġ�� �ִ´�
	if ((rear + 1) % 5 == front) {
		printf("\noverflow�� �߻��Ͽ����ϴ�\n");
		return;
	}
	queue[rear++] = data;
	rear = ++rear % 5;

}

Tree* get(void) {  // front ��ġ�� ���� ����
	Tree* rlt;
	if (front == rear) {
		printf("\n ����!!!!!! \n");
		return -1;
	}
	rlt = queue[front];
	front = ++front % 5;
	return rlt; //front ���� �ִ� ��
}



level_order_queue(Tree* p) {
	//ť�� �ְ�(put) ������� ������ ����(get)
	put(p);
	while (!queue_empty()) {
		p = get(); // ���༮�� �� ���� ��带 �ִ´�(put)
		printf("%3d", p->key);
		if (p->left != NULL) {
			put(p->left);
		}

		if (p->right != NULL) {
			put(p->right);
		}
	}
	//�� �༮�� �� ���� ��带 �ִ´�.(put)

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
	puts("\npre_order_stack ����\n");

	pre_order_stack(&c3); // �츮�� ���� ���ػ��
	puts("\nin_order_stack ����\n");
	in_order_stack(&c3); // �츮�� ���� ���ػ��

	puts("\nQ �� �̿���\n"); // �츮�� ���� q�� ����� ������ȸ
	level_order_queue(&c3);

}
*/

