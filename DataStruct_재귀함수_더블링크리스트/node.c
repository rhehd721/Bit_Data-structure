//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//Node* CreateNode(int data) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	
//	NewNode->Data = data;
//	NewNode->Pre = NULL;
//	NewNode->Next = NULL;
//
//	return NewNode;
//}
//
//void AppendNode(Node** Head, Node* NewNode) {
//	if ((*Head) == NULL) {
//		*Head = NewNode;
//		(*Head)->Next = *Head;
//		(*Head)->Pre = *Head;
//	}
//	else {
//		Node* Tail = (*Head)->Pre;
//
//		Tail->Next->Pre = NewNode;
//		Tail->Next = NewNode;
//
//		NewNode->Next = (*Head);
//		NewNode->Pre = Tail;
//	}
//}