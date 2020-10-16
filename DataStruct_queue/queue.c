//
//#pragma warning(disable:4996) //이전 문법 사용가능
//#include<time.h>
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include<assert.h>
//#define Q_SIZE 5
//
//int queue[Q_SIZE];
//int front, rear;
//
//void init_queue(void) {
//	front = rear = 0;
//}
//
//void put(int data) { // rear 위치에 넣는다
//	if ((rear +1)%5 == front) {
//		queue[rear++] = data;
//		printf("\noverflow가 발생하였습니다\n");
//	}
//	else if (rear == 5) {
//		rear = rear % 5;
//	}
//	else{
//		printf("\n데이터가 잘 들어갔습니다\n");
//		queue[rear++] = data;
//	}
//}
//
//int get(void) {  // front 위치로 부터 뺀다
//	int rlt;
//	if (front == rear) {
//		printf("\n 오류!!!!!! \n");
//		return -1;
//	}
//	rlt = queue[front];
//	front = ++front % 5;
//	return rlt; //front 값이 있는 곳
//}
//
//main() {
//	init_queue();
//	put(1);
//	put(2);
//	printf("%d", get());
//	printf("%d", get());
//	put(3);
//	put(4);
//	put(5);
//	put(6);
//
//	printf("%d", get());
//	printf("%d", get());
//
//	printf("\n  성공 ?%d", rear);
//	printf("\n  성공 ?%d", front);
//
//	for (int i = front; i != rear; i = ++i%5) {
//		printf("\n  for문이다 !!!!  ?%d", queue[i]);
//	}
//}