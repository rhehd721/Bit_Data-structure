#include <stdio.h>
#pragma warning(disable:4996) //���� ���� ��밡��
#include<time.h>
#include<stdlib.h>
#include <string.h>
#include<assert.h>

int search(int* pa, char(*list)[20], int min, int max) {



	int p = pa[0];
	char *l = list;
	int mi = min;
	int ma = max;

	int ha = (max - min) / 2;

	if (ha > p) { // ���ذ����� ������� �� ���ʿ� �ִٴ� ��

	}
	else if (ha > p) { // ���ذ����� ������� �� ���ʿ� �ִٴ� ��

	search(p, l, mi, ma);

}


main() {

	char list[26][20] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", "Kuper",
		"Louic", "Mathilda", "Nadia", "Olive", "Pablo", "Queen", "Rambo", "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };


	char pa[] = "Pablo";

	int num = search(pa, list,0,26);

	printf("ã���ô� �ܾ�� %d��° ����ֽ��ϴ�", num + 1);


}
