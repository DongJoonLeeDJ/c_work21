/*
1. 두개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해보자
예를 들어서 프로그램 사용자가 3과 5를 입력하면 3,4,5단이 출력되어야하고
2와 4를 입력하면 2,3,4단이 출력되어야 한다.
단, 한가지 조건이 있다.
사용자는 두개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
3과 5를 입력하면 5와 3을 입력하건 프로그램 같은 결과를 출력해야한다.
*/
#include <stdio.h>

void doA(int *a){
    *a = 20;
    printf("doA a value a = %d \n",a);
    printf("doA a point value *a = %d \n",*a);
}
void main(){
    int a = 10;
    int num1=0,num2=0;
    int i = 0;

    // printf("main address is\n");
    // printf("&a = %d\n",&a);
    // printf("main value is\n");
    // printf("a = %d\n",a);

    // doA(&a);

    // printf("a = %d\n",a);
    // doA(&a);
    // printf("a = %d\n",a);

    printf("num1 : ");
    scanf("%d",&num1);

    printf("num2 : ");
    scanf("%d",&num2);

    while(num1 < num2+1){
        for(i = 1; i<10 ; i++){
            printf("%d * %d = %d\n",num1,i,num1*i);
        }
        num1++;    
    }

    while(num2 < num1+1){
        for(i = 1; i<10 ; i++){
            printf("%d * %d = %d\n",num1,i,num1*i);
        }
        num2++;    
    }
}








