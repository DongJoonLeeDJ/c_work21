#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    // UTC 시간.. dateformat
    // printf("=1970년 1월 1일 부터 초 의 변화 = \n");
    // printf("%d \n", (int)time(NULL) );

    // printf("난수 출력 %d\n",RAND_MAX);

    // 0 < rand() < 32767
    // 100 으로 나누면
    // 100 으로 나누었을 때 나머지는...
    // 0 < rand() < 32699

    // 0 < rand() < 99
    // 0 < rand() < 67
    // 1초단위로 시간을 가져오는게 C언어
    // 1/1000초 단위로 시간을 가져오는 millsSecond()
    srand((int)time(NULL));
    // for(int i =0; i<10;i++){
        // rand()%6 0 ~ 5까지 숫자가 나온다.
        // +1       1 ~ 6까지 나온다..
    printf("주사위 1의 결과 %d\n", (rand()%6) + 1);
    printf("주사위 2의 결과 %d\n", (rand()%6) + 1);
    // }

}