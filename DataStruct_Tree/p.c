
/*
#include <stdio.h>
#pragma warning(disable:4996) //이전 문법 사용가능
#include<time.h>
#include<stdlib.h>
#include <string.h>
#include<assert.h>
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

void pre_order_stack(int *p) {

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

	pre_order_stack(&c3);

}
*/