//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//// ���� ã���� �ϴ� �̸��� ���°�� ����ִ��� �˷��ִ� ����Լ�
//
//void rere();
//
//int main()
//{
//    char* list[100] =
//    { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane",
//        "Kuper", "Louic", "Mathilda", "Nadia", "Olive", "Pablo", "Queen", "Rambo", "Scarlet", "Trisha",
//        "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };
//
//    char *name = "Louic";
//
//    int count = 0;
//
//
//    for (int i = 0; i <= sizeof(list) / 4; ++i) {
//        if (list[i] == NULL) {
//            break;
//        }
//        else {
//            ++count;
//        }
//    }
//
//
//
//    printf("list ��°� : %d", list);
//    printf("\nname ��°� : %d\n", name);
//    printf("\nlist[0] ��°� : %d\n", list[0]);
//    printf("\nlist[1] ��°� : %d\n", list[1]);
//    printf("\nlist[2] ��°� : %d\n", list[2]);
//    
//
//    rere(list, name, count, 0);
//
//
//
//
//    // �׽�Ʈ�� ����Ʈ
//    //printf("\n\ncount : %d \n\n", count);
//    //printf("\n\nsizeof : %d \n\n", sizeof(list) / 4);
//
//    return 0;
//
//}
//
//
//void rere(char **list[100], char **name, int max, int min ) {
//    //printf("\n\nlist : %s \n\n", list[0]);
//
//    int middle = (max + min) / 2;
//    int tem = 0;
//
//    tem = strcmp(list[middle], name);
//
//
//
//    if (tem == 1) { // �տ��ܾ� �� list�� ū���
//        rere(list, name, middle, min);
//    }
//    else if (tem == -1) { // �ڿ��ܾ� �� name�� ū���
//        rere(list, name, max, middle);
//    }
//    else {
//        printf("\n\n\nã���ô� �ܾ�� %d��° ����ֽ��ϴ�. \n\n\n", middle+1);
//        return;
//    }
//
//
//
//    // �׽�Ʈ �����Դϴ�
//   /* int count = 0;
//
//    for (int i = 0; i < max; ++i) {
//        count = i;
//        if (list[i] == name) {
//            break;
//        }
//    }
//
//    printf("ã���ô� �ܾ�� : %d", count);*/
//
//    //strcmp(s1, s2); �ι��ڰ� ������ 0 �տ��� ũ�� 1 �ڿ��� ũ�� -1
//}
