/*
#include<stdio.h>
#include<string.h>
typedef struct _sales
{
    char itemname[20];
    int unitprice;
    int count;
    int amount;
}sales;


int prd_item(const void* a, const void* b)
{
    //int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    //int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    //if (num1 < num2)    // a가 b보다 작을 때는
    //    return -1;      // -1 반환

    //if (num1 > num2)    // a가 b보다 클 때는
    //    return 1;       // 1 반환

    //return 0;    // a와 b가 같을 때는 0 반환

    //return strcmp(((sales*)a)->itemname, ((sales*)b)->itemname);
    return (((sales*)a)->count - ((sales*)b)->count);

}


main()
{
    sales prd[5] = {
     {"ccc", 10,90,900},
     {"ddd", 20,80,1600},
     {"aaa", 30,70,2100},
     {"eee", 40,60,2400},
     {"bbb", 50,50,2500}
    };
    int dx;

    qsort(prd, 5, sizeof(prd[0]), prd_item);


    for (dx = 0; dx < 5; dx++)
        printf("%s %d %d %d\n", prd[dx].itemname,
            prd[dx].unitprice, prd[dx].count, prd[dx].amount);


}
*/