/*
문제1
길이가 5인 int형 배열 arr을 선언하고 이를 1,2,3,4,5로 초기화한 다음, 이 배열의
첫번째 요소를 가리키는 포인터 변수 ptr을 선언한다. 그 다음 포인터 변수 ptr에 
저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하면서 모든
배열요소의 값을 2씩 증가시키고, 정상적으로 증가가 이뤄어 졌는지 확인
*/
#include <stdio.h>

void main(){
    int arr[5]={1,2,3,4,5};
    // int *p = arr;
    int *p;
    p = arr;
    int i =0;

    // 여기서 배열요소의 값을 각각 2씩 증가 시켜서 대입
    for(i=0; i<5; i++){
        // p[i] = p[i]+2;
        *(p+i) = *(p+i)+2;
        *(p+i) += 2;
        // printf("*(p+%d) = %d\n",i,*(p+i) );
    }

    // 다시 확인 하는 곳
    for(i=0; i<5; i++){
        // printf("p[%d] = %d\n",i,p[i]);
        printf("*(p+%d) = %d\n",i,*(p+i) );
    }


}
