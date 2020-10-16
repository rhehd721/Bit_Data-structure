#include <stdio.h>
#pragma warning(disable:4996) //이전 문법 사용가능
#include<time.h>
#include<stdlib.h>
#include <string.h>
#include<assert.h>


void search(int* pa, char(*list)[20]) {

}

main() {

	char list[26][20] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", "Kuper",
		"Louic", "Mathilda", "Nadia", "Olive", "Pablo", " Queen", "Rambo", "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };



	char pa[] = "Pablo";

	search(pa, list);

	//printf("\n\n%d\n\n",);

	//printf("\n%d", (sizeof(pa)));


}