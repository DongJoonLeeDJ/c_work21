/*
3. int 형 변수 num1과 num2를 선언과 동시에 각각 10,20으로 
초기화 하고, int 형포인터 변수 ptr1과 ptr2를 선언하여 각각 num1,num2를 가르키게
하자. 그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 10을
증가시키고, num2의 값을 10 감소시키자
이제 두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸자. 즉 포인터변수
ptr1이 num2 를 가르키게 하고, 포인터 변수 ptr2가 num1을 가르키게 하자
그리고 마지막으로 ptr1과 ptr2가 가리키는 변수에 저장된 값을 출력해보자.
*/
#include <stdio.h>

void main(){
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("num1 = %d \n",num1);
    printf("*ptr1 = %d \n",*ptr1);
    printf("num2 = %d \n",num2);
    printf("*ptr2 = %d \n",*ptr2);

    *ptr1 = *ptr1 + 10;
    *ptr2 = *ptr2 - 10; // num2 = 10
    
    printf("\n");
    printf("num1 = %d \n",num1);
    printf("*ptr1 = %d \n",*ptr1);
    printf("num2 = %d \n",num2);
    printf("*ptr2 = %d \n",*ptr2);

    ptr1 = &num2;
    ptr2 = &num1;

    printf("\n");
    printf("num1 = %d \n",num1);
    printf("*ptr1 = %d \n",*ptr1);
    printf("num2 = %d \n",num2);
    printf("*ptr2 = %d \n",*ptr2);

}