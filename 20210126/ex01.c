#include <stdio.h>
// shift + delete 한줄삭제
// ctrl + k + c 주석 처리
// ctrl + k + u 주석 설정 취소
// ctrl + z 뒤로 가기
// ctrl + y 앞으로 가기

// c -> exe       컴파일언어
// java -> class  컴파일언어
// python -> 없고.. 바로실행... 스크립트언어
void main(){
    int a = 10;
    int *b = &a;

    printf("a = %d\n",a);
    printf("*b = %d\n",*b);

    *b = 20;
    printf("a = %d\n",a);
    printf("*b = %d\n",*b);

    int c = 20;
    b = &c;
}