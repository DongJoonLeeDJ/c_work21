#include <stdio.h>

void main(){

    int num = 8;
    int *pnum = &num;
    // pnum = &num;

    *pnum = 10;

    printf("pnum value is  \n");
    printf("*pnum = %d\n",*pnum);
    printf("pnum address value is \n");
    printf("pnum = %d\n",pnum);

    printf("&num = %d",&num);
}