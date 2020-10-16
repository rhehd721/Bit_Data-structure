#include<stdio.h>
#pragma warning(disable:4996) //이전 문법 사용가능

#include<time.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<assert.h>

//모든걸 지역변수로 

#define STACK_SIZE 20


void stack_push(int * num,int* top, char**URL, char **main)		// 집어넣기
{ 
	if(*num == 1 ){
	printf("\n%s를 선택하셨습니다.\n원하시는 웹 주소를 입력해 주세요 : ", main[0]);
	char tem[20];
	scanf("%s", tem);
	* top = *top+1;
	strcpy(URL[*top], tem);
	}
	else {
		printf("\n%s를 선택하셨습니다.\n뒤로 이동할 수 있는 목록\n=====================\n", main[1]);
		for (int i = 0; i < *top; ++i) {
			printf("%d. %s\n", i + 1, URL[i + 1]);
		}
	}
}


int stack_pop(int* top, char** main)			// 뒤로가기
{ 
	if(*top != 0){
	printf("\n%s를 선택하셨습니다.\n", main[2]);
	*top = *top - 1;
	return 0;
	}
	else {
		printf("\n더이상 뒤로 갈 수 없습니다\n");
	}
}


main() {
	char Stack[STACK_SIZE];
	int top = 0;	//현재 나의 위치
	char *URL[20];
	char *main[5] = { "1. URL 접속", "2. 방문 기록 보기","3. 뒤로","4. 앞으로", "0. 종료" };
	URL[0] = "blank";

	while (1) {
		int num = 0;
		printf("\n현재 접속 중인 웹 페이지: %s \n=====================\n1. URL 접속\n2. 방문 기록 보기\n3. 뒤로\n4. 앞으로\n0. 종료\n=====================\n메뉴를 입력하세요 : ", URL[top]);
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
			printf("\n숫자를 잘못 입력하셨습니다\n");
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
//void stack_push(char *tem) { //값을 증가하고 자료를 넣는다
//	//다 넣은 상태에서 또 넣을때 에러,,,,
//	//stack overflow 발생
//	strcpy(URL[top+1], tem);
//	//Stack[++top] = URL;
//	++top;
//}
//
///*
//int stack_pop() { // 자료를 빼고 값을 뺀다
//	//다 뺸 상태에서 또 뻇을때 에러,,,,
//
//	if (top < 0) {
//		puts("stack underflow");
//		return -1; //void형태의 함수를 중간에 멈출때
//	}
//
//	int rlt;
//	rlt = Stack[top--];
//	return rlt;
//}
//*/
//
//main() {
//	stack_init(); //스택초기화 //모든 자료구조는 반드시 초기화를 해야한다
//	int num = 0;
//
//	while (1)
//	{
//		printf("현재 접속 중인 웹 페이지: %s \n===================== \n1. URL 접속\n2. 방문 기록 보기\n3. 뒤로\n4. 앞으로\n0. 종료\n===================== \n메뉴를 입력하세요 : ", (URL + top));
//		scanf_s("%d", &num);
//		if (num == 1) {
//			printf("\n%d. URL 접속을 선택하셨습니다. \n원하시는 웹 주소를 입력해 주세요 : ", num);
//			char tem[20];
//			scanf("%s", tem);
//			stack_push(tem);
//		}
//		else if (num == 2)
//		{
//			printf("\n%d. 방문기록 보기를 선택 하셨습니다. \n뒤로 이동 할 수 있는 목록\n=========================== ", num);
//			for (int i = 0; i < top+1; ++i) {
//				printf("\n%d. %s", i+1, (URL+i));
//			}
//			printf("\n\n");
//			continue;
//		}
//
//		else if (num == 3)
//		{
//			printf("%d. 뒤로가기를 선택 하셨습니다. \n=========================== ", num);
//			--top;
//			if (top == 0) {
//				puts("\nstack underflow!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
//			}
//		}
//		else if (num == 4)
//		{
//			printf("%d. 앞으로가기를 선택 하셨습니다. \n=========================== ", num);
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

void stack_push(int data) { //값을 증가하고 자료를 넣는다
	//다 넣은 상태에서 또 넣을때 에러,,,,
	//stack overflow발생
	if (top >= STACK_SIZE - 1) {
		puts("stack overflow");
		return; //void형태의 함수를 중간에 멈출때
	}

	Stack[++top] = data;
}

int stack_pop() { // 자료를 빼고 값을 뺀다
	//다 뺸 상태에서 또 뻇을때 에러,,,,

	if (top < 0) {
		puts("stack underflow");
		return -1; //void형태의 함수를 중간에 멈출때
	}

	int rlt;
	rlt = Stack[top--];
	return rlt;
}

main() {
	stack_init(); //스택초기화 //모든 자료구조는 반드시 초기화를 해야한다
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
// 10진수 num의 우측 n비트에서 w번째 비트까지 값을 추출하여 10진수로
main() {

	int num = 684;
	int n = 0;
	int w = 0;

	printf("n을 입력하세요: ");
	scanf_s("%d", &n);
	printf("\nn을 입력하세요: ");
	scanf_s("%d", &w);

	num = (num >> (n - 1) & ~(0xffffff<< w)); //이거아님 아래꺼
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

//어떤 값이 입력되든지 4의 배수 형태로 출력하게 하자/////////////////////////////////////////////////
/*
main() {

	int a = 0;
	printf("원하는 숫자를 입력하세요!");
	scanf_s("%d", &a);

	for (int i = 0; i < a + 1; ++i) {
		printf("%3d", i);
	}
	printf("\n반올림된 값을 출력합니다\n");

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
	//bit exclusive (반전) 0 -> 1, 1 -> 0

	/*
	int a = 0xA5;

	printf("1번 문제\n");
	if (a & (1 << 6)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}

	printf("2번 문제\n");
	a = a | 10;
	printf("%x\n", a);


	printf("4번 문제\n");
	a = 0xA5;
	a = a & 0xe0;
	printf("%x\n", a);

}
*/


//모든 원소는 이전 두 원소의 합으로 이루어지는/////////////////////////////////////////////////////
//피보나치(Fibonacci)수열을 출력하는 재귀함수 구현, 일반함수로도 구현

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
	scanf_s("Fibonacci수열 몇번째 출력을 원하십니까? : %d", num);

	fibo(num);


}
*/

//0 1 1 2 3 5 8 13 21

//main(){
	/*
	printf("문제 2번 \n");
	char x = 'a';
	printf("소문자를 하나 입력하세요 : ");
	scanf_s("%c", &x);

	int num = x;

	while (num < 123)
	{
		printf("%c", num);
		++num;

	}
	*/

	/*
	printf("\n문제 3번 \n");
	char x = 'A';
	printf("대문자를 하나 입력하세요 : ");
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
	printf("\n문제 6번 \n");

	int n = 0;
	int result = 0;

	printf("피보나치 수열에 들어갈 n 의 값을 입력하세요\n");
	scanf("%d", &n);

	result = fibo(n);

	printf("n의 값은 %d 입니다.\n", result);
	*/

	//printf("%d", 'Z'); //65 ~ 90

//}


/*
main() {
	int a = 0;
	int b = 0;
	int result = 0;
	int tem = 0;
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("\n두번째 숫자를 입력하세요 : ");
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

	printf("최대공약수는 : %d 입니다", result);


}
*/