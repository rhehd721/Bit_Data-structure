#include<stdio.h>
#pragma warning(disable:4996) //���� ���� ��밡��

#include<time.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<assert.h>

//���� ���������� 

#define STACK_SIZE 20


void stack_push(int * num,int* top, char**URL, char **main)		// ����ֱ�
{ 
	if(*num == 1 ){
	printf("\n%s�� �����ϼ̽��ϴ�.\n���Ͻô� �� �ּҸ� �Է��� �ּ��� : ", main[0]);
	char tem[20];
	scanf("%s", tem);
	* top = *top+1;
	strcpy(URL[*top], tem);
	}
	else {
		printf("\n%s�� �����ϼ̽��ϴ�.\n�ڷ� �̵��� �� �ִ� ���\n=====================\n", main[1]);
		for (int i = 0; i < *top; ++i) {
			printf("%d. %s\n", i + 1, URL[i + 1]);
		}
	}
}


int stack_pop(int* top, char** main)			// �ڷΰ���
{ 
	if(*top != 0){
	printf("\n%s�� �����ϼ̽��ϴ�.\n", main[2]);
	*top = *top - 1;
	return 0;
	}
	else {
		printf("\n���̻� �ڷ� �� �� �����ϴ�\n");
	}
}


main() {
	char Stack[STACK_SIZE];
	int top = 0;	//���� ���� ��ġ
	char *URL[20];
	char *main[5] = { "1. URL ����", "2. �湮 ��� ����","3. �ڷ�","4. ������", "0. ����" };
	URL[0] = "blank";

	while (1) {
		int num = 0;
		printf("\n���� ���� ���� �� ������: %s \n=====================\n1. URL ����\n2. �湮 ��� ����\n3. �ڷ�\n4. ������\n0. ����\n=====================\n�޴��� �Է��ϼ��� : ", URL[top]);
		scanf_s("%d", &num);
		printf("\n\n");
		if (num == 1) {
			stack_push(&num ,&top, URL, main);
		}
		else if (num == 2) {
			stack_push(&num, &top, URL, main);
		}
		else if (num == 3) {
			stack_pop(&top, main);
		}
		else if (num == 4) {

		}
		else if (num != 0) {
			printf("\n���ڸ� �߸� �Է��ϼ̽��ϴ�\n");
		}
		else {

		}


	}

}




////#define STACK_SIZE 20
//
////char Stack[STACK_SIZE];
//int top;
//char URL[100][20];
//
//stack_init() {
//	top = -1;
//}
//
//void stack_push(char *tem) { //���� �����ϰ� �ڷḦ �ִ´�
//	//�� ���� ���¿��� �� ������ ����,,,,
//	//stack overflow �߻�
//	strcpy(URL[top+1], tem);
//	//Stack[++top] = URL;
//	++top;
//}
//
///*
//int stack_pop() { // �ڷḦ ���� ���� ����
//	//�� �A ���¿��� �� �P���� ����,,,,
//
//	if (top < 0) {
//		puts("stack underflow");
//		return -1; //void������ �Լ��� �߰��� ���⶧
//	}
//
//	int rlt;
//	rlt = Stack[top--];
//	return rlt;
//}
//*/
//
//main() {
//	stack_init(); //�����ʱ�ȭ //��� �ڷᱸ���� �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�
//	int num = 0;
//
//	while (1)
//	{
//		printf("���� ���� ���� �� ������: %s \n===================== \n1. URL ����\n2. �湮 ��� ����\n3. �ڷ�\n4. ������\n0. ����\n===================== \n�޴��� �Է��ϼ��� : ", (URL + top));
//		scanf_s("%d", &num);
//		if (num == 1) {
//			printf("\n%d. URL ������ �����ϼ̽��ϴ�. \n���Ͻô� �� �ּҸ� �Է��� �ּ��� : ", num);
//			char tem[20];
//			scanf("%s", tem);
//			stack_push(tem);
//		}
//		else if (num == 2)
//		{
//			printf("\n%d. �湮��� ���⸦ ���� �ϼ̽��ϴ�. \n�ڷ� �̵� �� �� �ִ� ���\n=========================== ", num);
//			for (int i = 0; i < top+1; ++i) {
//				printf("\n%d. %s", i+1, (URL+i));
//			}
//			printf("\n\n");
//			continue;
//		}
//
//		else if (num == 3)
//		{
//			printf("%d. �ڷΰ��⸦ ���� �ϼ̽��ϴ�. \n=========================== ", num);
//			--top;
//			if (top == 0) {
//				puts("\nstack underflow!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
//			}
//		}
//		else if (num == 4)
//		{
//			printf("%d. �����ΰ��⸦ ���� �ϼ̽��ϴ�. \n=========================== ", num);
//			++top;
//			
//		}
//		
//		else
//		{
//			break;
//		}
//		
//	}
//}





/*
#include<stdio.h>
#include<assert.h>
#define STACK_SIZE 5

int Stack[STACK_SIZE];
int top;


stack_init() {
	top = -1;
}

void stack_push(int data) { //���� �����ϰ� �ڷḦ �ִ´�
	//�� ���� ���¿��� �� ������ ����,,,,
	//stack overflow�߻�
	if (top >= STACK_SIZE - 1) {
		puts("stack overflow");
		return; //void������ �Լ��� �߰��� ���⶧
	}

	Stack[++top] = data;
}

int stack_pop() { // �ڷḦ ���� ���� ����
	//�� �A ���¿��� �� �P���� ����,,,,

	if (top < 0) {
		puts("stack underflow");
		return -1; //void������ �Լ��� �߰��� ���⶧
	}

	int rlt;
	rlt = Stack[top--];
	return rlt;
}

main() {
	stack_init(); //�����ʱ�ȭ //��� �ڷᱸ���� �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�
	stack_push(5);
	stack_push(4);
	stack_push(3);
	stack_push(2);
	stack_push(1);
	stack_push(6);
	printf("%d\n", stack_pop());
	printf("%d\n", stack_pop());
	printf("%d\n", stack_pop());
	printf("%d\n", stack_pop());
	printf("%d\n", stack_pop());
	printf("%d\n", stack_pop());
}
*/



/*
// 10���� num�� ���� n��Ʈ���� w��° ��Ʈ���� ���� �����Ͽ� 10������
main() {

	int num = 684;
	int n = 0;
	int w = 0;

	printf("n�� �Է��ϼ���: ");
	scanf_s("%d", &n);
	printf("\nn�� �Է��ϼ���: ");
	scanf_s("%d", &w);

	num = (num >> (n - 1) & ~(0xffffff<< w)); //�̰žƴ� �Ʒ���
	num = (num >> (n - 1) & ~(~(0) << w));

	printf("%d\n", num);

}
*/



//NDEBUG /
/*
#define NDEBUG
#ifdef  NDEBUG
#include<assert.h>
#endif



main() {

	int x;
	printf("\nEnter an intrger value: ");
	scanf_s("%d", & x);
	assert(x >= 0);
	printf("You entered %d.", x);
	return(0);

}
*/

//� ���� �Էµǵ��� 4�� ��� ���·� ����ϰ� ����/////////////////////////////////////////////////
/*
main() {

	int a = 0;
	printf("���ϴ� ���ڸ� �Է��ϼ���!");
	scanf_s("%d", &a);

	for (int i = 0; i < a + 1; ++i) {
		printf("%3d", i);
	}
	printf("\n�ݿø��� ���� ����մϴ�\n");

	for (int i = 0; i < a + 1; ++i) {
		if (i % 4 != 0) {
			printf("%2d", i + (4 - i));
		}
	}

}
*/


//main() {
	/*
	int a = 0x12345678;
	a = a & 0xff;

	printf("%x\n", a); // mask

	if (a & 128) //check
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	*/
	//bit exclusive (����) 0 -> 1, 1 -> 0

	/*
	int a = 0xA5;

	printf("1�� ����\n");
	if (a & (1 << 6)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}

	printf("2�� ����\n");
	a = a | 10;
	printf("%x\n", a);


	printf("4�� ����\n");
	a = 0xA5;
	a = a & 0xe0;
	printf("%x\n", a);

}
*/


//��� ���Ҵ� ���� �� ������ ������ �̷������/////////////////////////////////////////////////////
//�Ǻ���ġ(Fibonacci)������ ����ϴ� ����Լ� ����, �Ϲ��Լ��ε� ����

/*
int fibo(int n) {
	int i = 1;



	if (i == n) {
		return 0;
	}
	
	fibo(n);
}


main() {
	int num = 0;
	scanf_s("Fibonacci���� ���° ����� ���Ͻʴϱ�? : %d", num);

	fibo(num);


}
*/

//0 1 1 2 3 5 8 13 21

//main(){
	/*
	printf("���� 2�� \n");
	char x = 'a';
	printf("�ҹ��ڸ� �ϳ� �Է��ϼ��� : ");
	scanf_s("%c", &x);

	int num = x;

	while (num < 123)
	{
		printf("%c", num);
		++num;

	}
	*/

	/*
	printf("\n���� 3�� \n");
	char x = 'A';
	printf("�빮�ڸ� �ϳ� �Է��ϼ��� : ");
	scanf_s("%c", &x);

	int num2 = x;
	int str = 65;

	while (str < num2+1)
	{
		printf("%c", str);
		++str;

	}
	*/
	/*
	printf("\n���� 6�� \n");

	int n = 0;
	int result = 0;

	printf("�Ǻ���ġ ������ �� n �� ���� �Է��ϼ���\n");
	scanf("%d", &n);

	result = fibo(n);

	printf("n�� ���� %d �Դϴ�.\n", result);
	*/

	//printf("%d", 'Z'); //65 ~ 90

//}


/*
main() {
	int a = 0;
	int b = 0;
	int result = 0;
	int tem = 0;
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("\n�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);


	//while (a != 0) {
	//	if (a < b) {
	//		result = a;
	//		a = b;
	//		b = a;
	//	}
	//	else
	//	{
	//		a = a - b;
	//	}
	//}


	while (1) {
		if ( b == 0) {
			result = a;
			break;
		}
		else
		{
			a = a % b;
			tem = a;
			a = b;
			b = tem;

		}
	}

	printf("�ִ������� : %d �Դϴ�", result);


}
*/