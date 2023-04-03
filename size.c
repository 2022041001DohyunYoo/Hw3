#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **x; //int형 이중 포인터 x

    printf("[-----유도현 2022041001-----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));//x의 크기 = 8바이트 (포인터라서)
    printf("sizeof(*x) = %lu\n", sizeof(*x));//x 역참조의 크기 = 8바이트 (이중 포인터라서 한번 역참조해도 포인터)
    printf("sizeof(**x) = %lu\n", sizeof(**x));//x 역참조의 역참조의 크기 = 4바이트 (이중포인터 이중 역참조 해서 int형이 나옴)
}