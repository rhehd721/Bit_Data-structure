//#include <stdio.h>
//#pragma warning(disable:4996) //���� ���� ��밡��
//#include<time.h>
//#include<stdlib.h>
//#include <string.h>
//#include<assert.h>
//
//void search(char* pablo, char(*list)[20]) {
//
//	//printf("\n%c", (*(list+1))[0]);  //B
//	//printf("\n%c", pablo[0]);
//
//	int pa = pablo[0];
//	int half = 0;
//	int min = 0;
//	int max = 26;
//	half = ( max - min ) / 2;
//	int li = (*(list + half))[0];
//
//	
//
//	while (1)
//	{
//		li = (*(list + half))[0];
//		if (li > pa) { // ���ذ����� ������� �� ���ʿ� �ִٴ� ��
//			max = half;
//			if (((half - min) / 2) != 0) {
//				half = half - ((half - min) / 2);
//			}
//			else {
//				--half;
//			}
//		}
//
//		else if (li < pa) { // ���ذ����� ū��� �� ���ʿ� �ִٴ� ��
//			min = half;
//			if (((max - half) / 2) != 0) {
//				half += ((max - half) / 2);				
//			}
//			else {
//				++half;
//			}
//		}
//
//		else {
//			break;
//		}
//		
//	}
//
//	printf("ã���ô� �ܾ�� %d��° ����ֽ��ϴ�", half+1);
//}
//
//
//main() {
//
//	char list[26][20] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", "Kuper",
//		"Louic", "Mathilda", "Nadia", "Olive", "Pablo", "Queen", "Rambo", "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };
//
//
//
//	char pa[] = "Pablo";
//
//	char pb[] = "Mathilda";
//	char pc[] = "Pablo";
//
//	search(pa, list);
//
//	search(pb, list);
//
//	search(pc, list);
//
//	//printf("\n\n%d\n\n",);
//
//	//printf("\n%d", (sizeof(pa)));
//
//
//}
//
//
////main(){
////
////	char *list[] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", "Kuper",
////		"Louic", "Mathilda", "Nadia", "Olive", "Pablo", " Queen", "Rambo", "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };
////
////	char pa = "pablo";
////
////	search(pa, list);
////
////	printf("\n%d", (sizeof(*list[0])));
////	
////	//printf("\n%d", (sizeof(list)/4)); // �̰����� ����Ʈ�� ũ�⸦ Ȯ��
////
////}