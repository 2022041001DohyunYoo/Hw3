#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4}; //int 배열 one

    printf("[-----유도현 2022041001-----]\n");

    printf("one = %p\n", one); //one의 값 = one의 주소 출력
    printf("&one = %p\n", &one); // one의 주소 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소 출력
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); //print_one에 one[0]의 주소, 5 전달한 반환값 출력
    printf("------------------------------------\n");
    print_one(&one[0], 5);//print_one에 one[0]의 주소, 5 전달
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");//print_one에 one의 값, 5 전달한 반환값 출력
    printf("------------------------------------\n");
    print_one(one, 5);//print_one에 one의 값, 5 전달
    return 0;
}


void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");//출력
    for (i = 0; i < rows; i++)//rows번 만큼 반복
        printf("%p \t %5d\n", ptr + i, *(ptr + i));//ptr의 4*i바이트 뒤의 주소,ptr의 4*i바이트 뒤를 역참조한 값 출력
    printf("\n");
}