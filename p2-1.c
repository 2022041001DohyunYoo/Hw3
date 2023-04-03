#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); //함수 sum1
float sum2(float *list, int); //함수 sum2
float sum3(int n, float *list); //함수 

float input[MAX_SIZE], answer; 
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++) //maxsize번 만큼 반복
        input[i] = i; // input[i] = i
/* for checking call by reference */

    printf("[-----유도현 2022041001-----]\n");

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");//sum1에 input, MAX_SIZE를 전달한 반환값 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input값 출력
    answer = sum1(input, MAX_SIZE); //answer에 sum1에 input, MAX_SIZE를 전달한 반환값 넣기
    printf("The sum is: %f\n\n", answer); // answer값 출력
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n"); //sum2에 input, MAX_SIZE를 전달한 반환값 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);// input값 출력
    answer = sum2(input, MAX_SIZE);//answer에 sum2에 input, MAX_SIZE를 전달한 반환값 넣기
    printf("The sum is: %f\n\n", answer);// answer값 출력
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");//sum3에 input, MAX_SIZE를 전달한 반환값 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);// input값 출력
    answer = sum3(MAX_SIZE, input);//answer에 sum3에 input, MAX_SIZE를 전달한 반환값 넣기
    printf("The sum is: %f\n\n", answer);// answer값 출력
    }


float sum1(float list[], int n)
    {

    printf("list\t= %p\n", list); //list의 값 출력
    printf("&list\t= %p\n\n", &list);//list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++) //n번 반복
        tempsum += list[i];//tempsum에 list의 요소들의 합 넣기
    return tempsum; // tempsum 반환
    
    }

float sum2(float *list, int n) {
    printf("list\t= %p\n", list);//list의 값 출력
    printf("&list\t= %p\n\n", &list);//list의 주소 출력

    int i;
    float tempsum = 0;

    for(i = 0;i < n;i++)//n번 반복
        tempsum += *(list +i);//tempsum에 list의 i*4바이트 뒤의 주소 역참조값 넣기
    return tempsum; //tempsum 반환
    }

/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list\t= %p\n", list);//list의 값 출력
    printf("&list\t= %p\n\n", &list);//list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)//n번 반복
        tempsum += *(list +i);//tempsum에 list의 i*4바이트 뒤의 주소 역참조값 넣기
    return tempsum;//tempsum 반환
    }