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
    //int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
    //int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

    //if (num1 < num2)    // a�� b���� ���� ����
    //    return -1;      // -1 ��ȯ

    //if (num1 > num2)    // a�� b���� Ŭ ����
    //    return 1;       // 1 ��ȯ

    //return 0;    // a�� b�� ���� ���� 0 ��ȯ

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