#include <stdio.h>
#include <stdlib.h>
int main()
{
    int list[5]; //5칸 짜리 배열 list
    int *plist[5];//5칸 짜리 포인터 배열 plist
    list[0] = 10; //list[0]에 10 넣기
    list[1] = 11;//list[1]에 11 넣기
    plist[0] = (int*)malloc(sizeof(int)); //포인터 plist[0]에 int형으로 동적 할당
    printf("[-----유도현 2022041001-----]\n");

    printf("list[0] \t= %d\n", list[0]);//list[0]의 값
    printf("list \t\t= %p\n", list);//list의 값 = list가 가리키는 주소 = list의 주소
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 = list의 주소
    printf("list + 0 \t= %p\n", list+0); // list의 주소
    printf("list + 1 \t= %p\n", list+1); // list의 주소에서 4바이트 뒤
    printf("list + 2 \t= %p\n", list+2);// list의 주소에서 8바이트 뒤
    printf("list + 3 \t= %p\n", list+3);// list의 주소에서 12바이트 뒤
    printf("list + 4 \t= %p\n", list+4);// list의 주소에서 16바이트 뒤 = list[4]의 주소
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 = list의 주소에서 16바이트 뒤
    free(plist[0]); //plist[0] 할당해제
}