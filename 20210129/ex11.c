/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력받아서
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해보자.
일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자.
단 10개의 정수는 main함수 내에서 입력 받도록 하고,
배열내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는
짝수만 출력하는 함수를 각각 정의해서 이 두 함수를 호출하는
방식으로 프로그램을 완성하자.
*/
#include <stdio.h>
// 홀수 출력
void odd(int *p)
{
    printf("홀수 출력");
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if(p[i]%2==1)
            printf("%d ",p[i]);
            // printf("p[%d] =%d\n", i, p[i]);
    }
}
// 짝수 출력
void even(int *p)
{
    printf("짝수 출력");
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if(p[i]%2==0)
            printf("%d ",p[i]);
    }
}

void main()
{
    int arr[10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d 숫자 입력\n", i);
        scanf("%d", &arr[i]);
    }
    odd(arr);
    printf("\n");
    even(arr);
}