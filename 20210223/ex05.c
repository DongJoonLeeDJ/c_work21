#define ADD
#define HIT_NUM 6

#ifndef STDIO_H

#define STDIO_H
#include <stdio.h>

#endif
#include "a.h"


// 아키텍쳐..
void main(){

#ifdef ADD
    printf("ADD 가 선언 되어 있다.\n");
#endif    

#if HIT_NUM == 5
    printf("HIT_NUM은 5입니다.");
#elif  HIT_NUM == 6
    printf("HIT_NUM은 6입니다.");
#endif

}