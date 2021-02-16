#include<stdio.h>

int doA(int a){
    printf("do A 함수 입니다. a = %d\n",a);
}
int doB(int a,int b){
    printf("do B 함수 입니다. a = %d  , b = %d\n",a , b);
}
int doC(int c){
    printf("do c 함수 입니다. c = %d\n",c);
}

void main(){
    int (*a)(int);
    int (*b)(int,int);

    a = doA;
    b = doB;

    a(10);
    b(20,30);
    a = doC;
    a(40);
}