/*
2. 2의 n승을 구하는 함수를 재귀적으로 구현해보자. 그리고 그에 따른 
적절한 main 함수도 구현해보자. 참고로 재귀 함수의 구현이
처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시한다.
....예시 
정수 입력: 8
2의 8승은 256
*/

#include <stdio.h>

int doA(int a){
    printf("a = %d\n",a);
    if(a>0){
        /*
            2 * doA(2)
            2 * 2 * doA(1)
            2 * 2 * 2 * doA(0)
            2 * 2 * 2 * 1
        */
        return 2*doA(a-1);
    }
    else{
        return 1;
    }
}

void main(){
    int value = doA(3);
    printf("value = %d",value);
}