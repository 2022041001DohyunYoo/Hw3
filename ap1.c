#include <stdio.h>
#include <stdlib.h>
int main()
{
    int list[5]; //배열
    int *plist[5] = {NULL,};//포인터 배열
    plist[0] = (int *)malloc(sizeof(int)); //포인터 plist[0]에 int형으로 동적 할당
    list[0] = 1; 
    list[1] = 100; //배열에 값 넣기
    *plist[0] = 200; //포인터 배열의 첫번째 칸이 가리키는 곳에 역참조



    printf("[-----유도현 2022041001-----]\n");



    printf("list[0] = %d\n", list[0]);//list[0]의 값
    printf("&list[0] = %p\n", &list[0]);//list[0]의 주소
    printf("list = %p\n", list);//list[0]의 주소 = 포인터 list에 든 주소
    printf("&list = %p\n", &list);//list[0]의 주소 = 포인터 list의 주소 (list[0] 과 list는 동일)
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //list[1]의 값
    printf("&list[1] = %p\n", &list[1]);//list[1]의 주소
    printf("*(list+1) = %d\n", *(list + 1));//list 주소 +1 을 역참조한 값 = list[1]의 값
    printf("list+1 = %p\n", list+1); //list 주소의 4바이트 뒤 = list[1]의 주소
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //plist[0]를 역참조 한 값
    printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소
    printf("&plist = %p\n", &plist);//포인터 plist의 주소 = plist[0]의 주소
    printf("plist = %p\n", plist); // plist에 든 주소 = plist[0]의 주소
    printf("plist[0] = %p\n", plist[0]);//plist[0]의 주소 = 동적할당 한 주소
    printf("plist[1] = %p\n", plist[1]);//plist[1] = NULL 포인터 (할당한 것이 없음)
    printf("plist[2] = %p\n", plist[2]);//plist[2] = NULL 포인터 (할당한 것이 없음)
    printf("plist[3] = %p\n", plist[3]);//plist[3] = NULL 포인터 (할당한 것이 없음)
    printf("plist[4] = %p\n", plist[4]);//plist[4] = NULL 포인터 (할당한 것이 없음)
    free(plist[0]); //plist[0] 할당 해제
    }