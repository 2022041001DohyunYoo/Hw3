#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{
    struct student pst;

    printf("[-----유도현 2022041001-----]\n");

    printf("size of student = %ld\n", sizeof(struct student));
    //패딩으로 인해 구조체의 변수들이 4의 배수 단위로 끊겨 16 + 4 + 4 = 24 바이트 
    printf("size of int = %ld\n", sizeof(int));//int형의 크기 = 4바이트
    printf("size of short = %ld\n", sizeof(short));//short형의 크기 = 2바이트
    return 0;
}