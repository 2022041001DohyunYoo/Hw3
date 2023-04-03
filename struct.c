#include <stdio.h>
struct student1 {
    char lastName;
    int studentId;
    char grade;
    };//자료형 student1
typedef struct {
    char lastName;
    int studentId;
    char grade;
    } student2;//자료형 student2
int main() {

    struct student1 st1 = {'A', 100, 'A'}; //student1형 변수 st1을 'A', 100, 'A'로 초기화


    printf("[-----유도현 2022041001-----]\n");


    printf("st1.lastName = %c\n", st1.lastName);//st1의 멤버 변수 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId);//st1의 멤버 변수 studentId 출력
    printf("st1.grade = %c\n", st1.grade);//st1의 멤버 변수 grade

    student2 st2 = {'B', 200, 'B'};//student2형 변수 st2을 'B', 200, 'B'로 초기화

    printf("\nst2.lastName = %c\n", st2.lastName);//st2의 멤버 변수 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId);//st2의 멤버 변수 studentId 출력
    printf("st2.grade = %c\n", st2.grade);//st2의 멤버 변수 grade 출력

    student2 st3; //student2형 변수 st3 초기화
    st3 = st2; // st3에 st2의 요소 넣기

    printf("\nst3.lastName = %c\n", st3.lastName);//st3의 멤버 변수 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId);//st3의 멤버 변수 studentId 출력
    printf("st3.grade = %c\n", st3.grade);//st3의 멤버 변수 grade 출력
    /* equality test */

    if(st3.grade == st2.grade && st3.lastName == st2.lastName && st3.studentId == st2.studentId) 
        printf("equal\n"); // st2와 st3의 멤버변수의 값이 전부 일치하면 출력
    else
        printf("not equal\n");//아니면 출력
    return 0;
}