#include <stdio.h>
#pragma warning(disable:4996) //이전 문법 사용가능
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

	if (ha > p) { // 기준값보다 작은경우 즉 앞쪽에 있다는 뜻

	}
	else if (ha > p) { // 기준값보다 작은경우 즉 앞쪽에 있다는 뜻

	search(p, l, mi, ma);

}


main() {

	char list[26][20] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", "Kuper",
		"Louic", "Mathilda", "Nadia", "Olive", "Pablo", "Queen", "Rambo", "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };


	char pa[] = "Pablo";

	int num = search(pa, list,0,26);

	printf("찾으시는 단어는 %d번째 들어있습니다", num + 1);


}
