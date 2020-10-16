/*
#include<stdio.h>

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode* PrevNode;
    struct tagNode* NextNode;
} Node;


Node* CreateNode(ElementType NewData) // 0
{
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->PrevNode = NULL;
    NewNode->NextNode = NULL;

    return NewNode;
}




/*  ��� �߰� */
void AppendNode(Node** Head, Node* NewNode)
{

    if ((*Head) == NULL)
    {
        *Head = NewNode;
        (*Head)->NextNode = *Head;
        (*Head)->PrevNode = *Head;
    }
    else
    {

        Node* Tail = (*Head)->PrevNode;

        Tail->NextNode->PrevNode = NewNode;
        Tail->NextNode = NewNode;

        NewNode->NextNode = (*Head);
        NewNode->PrevNode = Tail;

    }
}
int main(void)
{
    int   i = 0;
    Node* List = NULL;
    Node* NewNode = NULL;
    Node* Current = NULL;

    /*  ��� 5�� �߰� */
    for (i = 0; i < 5; i++) //�� �ݺ����� 3�� ���� �������� �޸� ��� �׸���
    {
        NewNode = CreateNode(i);
        AppendNode(&List, NewNode);
    }
}
*/