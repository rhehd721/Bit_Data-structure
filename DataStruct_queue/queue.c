//
//#pragma warning(disable:4996) //���� ���� ��밡��
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
//void put(int data) { // rear ��ġ�� �ִ´�
//	if ((rear +1)%5 == front) {
//		queue[rear++] = data;
//		printf("\noverflow�� �߻��Ͽ����ϴ�\n");
//	}
//	else if (rear == 5) {
//		rear = rear % 5;
//	}
//	else{
//		printf("\n�����Ͱ� �� �����ϴ�\n");
//		queue[rear++] = data;
//	}
//}
//
//int get(void) {  // front ��ġ�� ���� ����
//	int rlt;
//	if (front == rear) {
//		printf("\n ����!!!!!! \n");
//		return -1;
//	}
//	rlt = queue[front];
//	front = ++front % 5;
//	return rlt; //front ���� �ִ� ��
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
//	printf("\n  ���� ?%d", rear);
//	printf("\n  ���� ?%d", front);
//
//	for (int i = front; i != rear; i = ++i%5) {
//		printf("\n  for���̴� !!!!  ?%d", queue[i]);
//	}
//}