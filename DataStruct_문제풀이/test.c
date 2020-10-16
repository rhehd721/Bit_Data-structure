//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int searchStringInArray_Func(char(*)[10], int, char*);
//int searchStringInArray_Recur(char(*)[10], int, int, char*);
//
//int main(int argc, char** argv)
//{
//    char list[][10] = \
//    {"Alice", "Bill", "Carol", "David", "Elvis", "Fred", "Gabriel", "Helen", "Isabel", "Jane", \
//        "Kuper", "Louic", "Mathilda", "Nadia", "Olive", "Pablo", " Queen", "Rambo", "Scarlet", "Trisha", \
//        "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };
//
//    int nIndex = -1;
//
//    nIndex = searchStringInArray_Func(list, sizeof(list) / sizeof(list[0]) - 1, "Yuki");
//
//    printf("hanelso : %d\n", nIndex);
//
//    nIndex = searchStringInArray_Recur(list, sizeof(list) / sizeof(list[0]) - 1, 0, "Alice");
//
//    printf("hanelso : %d\n", nIndex);
//
//    return 0;
//
//}
//
//
//int searchStringInArray_Func(char(*pName)[10], int nEndVal, char* pcData)
//{
//    int nResult = -1;
//    int nMiddle = 0;
//    char(*pTmp)[10] = NULL;
//
//    int nEnd = nEndVal;
//    int nStart = 0;
//
//    while (1)
//    {
//        // middle 값 구하기
//        nMiddle = (nEnd + nStart) / 2;
//
//        // 비교하려고 하는 문자열 탐색
//        pTmp = pName + nMiddle;
//
//        // 데이터 비교
//        nResult = strcmp(pcData, (char*)pTmp);
//        // printf("%s\n", pTmp );
//        // printf("%d\n", nResult );
//
//        if (nResult > 0)
//        {
//            nStart = nMiddle + 1;
//        }
//        else if (nResult < 0)
//        {
//            nEnd = nMiddle - 1;
//        }
//        else
//        {
//            break;
//        }
//
//    }
//
//    return nMiddle;
//}
//int searchStringInArray_Recur(char(*pName)[10], int nEndVal, int nStartVal, char* pcData)
//{
//    int nResult = -1;
//    int nMiddle = 0;
//    char(*pTmp)[10] = NULL;
//    int nEnd = nEndVal;
//    int nStart = nStartVal;
//
//    // middle 값 구하기
//    nMiddle = (nEnd + nStart) / 2;
//    // 비교하려고 하는 문자열 탐색
//    pTmp = pName + nMiddle;
//    // 데이터 비교
//    nResult = strcmp(pcData, (char*)pTmp);
//
//    if (nResult > 0)
//    {
//        nMiddle = searchStringInArray_Recur(pName, nEnd, nMiddle + 1, pcData);
//    }
//    else if (nResult < 0)
//    {
//        nMiddle = searchStringInArray_Recur(pName, nMiddle - 1, nStart, pcData);
//    }
//
//
//    return nMiddle;
//}