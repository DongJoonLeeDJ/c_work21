/*
문제 1
변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고,
이를 호출하는 main함수를 작성해보자.
단, 여기서는 다음 두가지 형태로 함수를 정의해야 한다.
call by value
call by reference

SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며,
SquareByReference 함수는 정수가 저장되어 있는 변수의
주소 값을 인자로 받아서 해당 변수에 저장된 값의 제곱을 
그 변수에 다시 저장해야 한다.

문제2
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자
예를 들어서 함수의 이름이 Swap3라 하면, 다음의 형태로 함수가
호출되어야한다.
Swap3(&num1,&num2,&num3);
그리고 함소 호출의 결과로 num1에 저장된 값은 num2에
num2에 저장된 값은 num3에
그리고 num3에 저장된 값은 num1에 저장되어야한다.
*/
#include <stdio.h>

void main(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

    int l_num2 = num2;
    num2 = num1;
    
    int l_num3 = num3;
    num3 = l_num2;
    num1 = l_num3;

    printf("\n\nnum1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

}