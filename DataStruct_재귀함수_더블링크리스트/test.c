//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//// 내가 찾고자 하는 이름이 몇번째에 들어있는지 알려주는 재귀함수
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
//    printf("list 출력값 : %d", list);
//    printf("\nname 출력값 : %d\n", name);
//    printf("\nlist[0] 출력값 : %d\n", list[0]);
//    printf("\nlist[1] 출력값 : %d\n", list[1]);
//    printf("\nlist[2] 출력값 : %d\n", list[2]);
//    
//
//    rere(list, name, count, 0);
//
//
//
//
//    // 테스트용 프린트
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
//    if (tem == 1) { // 앞에단어 즉 list가 큰경우
//        rere(list, name, middle, min);
//    }
//    else if (tem == -1) { // 뒤에단어 즉 name가 큰경우
//        rere(list, name, max, middle);
//    }
//    else {
//        printf("\n\n\n찾으시는 단어는 %d번째 들어있습니다. \n\n\n", middle+1);
//        return;
//    }
//
//
//
//    // 테스트 구간입니다
//   /* int count = 0;
//
//    for (int i = 0; i < max; ++i) {
//        count = i;
//        if (list[i] == name) {
//            break;
//        }
//    }
//
//    printf("찾으시는 단어는 : %d", count);*/
//
//    //strcmp(s1, s2); 두문자가 같으면 0 앞에가 크면 1 뒤에가 크면 -1
//}
