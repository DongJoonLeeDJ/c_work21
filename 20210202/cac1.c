/*
    돌리기 함수
*/
#include <stdio.h>

void dolprint(int (*parr)[4],int (*pbrr)[4]){
    int k = 3;
    int j =0;
    int i = 0;
    for(j =0; j<4; j++){
        for(i =0; i<4; i++){
            pbrr[i][k] =parr[j][i];
        }
        k--;
    }
    for(j =0; j<4; j++){
        for(i =0; i<4; i++){
            printf("%d\t",pbrr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

void main(){
    int arr[4][4]={
        {1,2,3,4},      // 0,0 0,1 0,2 0,3 -> 0,3 1,3 2,3 3,3
        {5,6,7,8},      // 1,0 1,1 1,2 1,3 -> 0,2 1,2 2,2 3,2
        {9,10,11,12},   // 2,0 2,1 2,2 2,3 -> 0,1 1,1 2,1 3,1
        {13,14,15,16}   // 3,0 3,1 3,2 3,3 -> 0,0 1,0 2,0 3,0
    };
    int brr[4][4];
    
    dolprint(arr,brr);
    dolprint(brr,arr);
    dolprint(arr,brr);
    dolprint(brr,arr);
}