/*
    돌리기
*/
#include <stdio.h>

void main(){
    int arr[4][4]={
        {1,2,3,4},      // 0,0 0,1 0,2 0,3 -> 0,3 1,3 2,3 3,3
        {5,6,7,8},      // 1,0 1,1 1,2 1,3 -> 0,2 1,2 2,2 3,2
        {9,10,11,12},   // 2,0 2,1 2,2 2,3 -> 0,1 1,1 2,1 3,1
        {13,14,15,16}   // 3,0 3,1 3,2 3,3 -> 0,0 1,0 2,0 3,0
    };
    int brr[4][4];
    int k = 3;

    for(int j =0; j<4; j++){
        for(int i =0; i<4; i++){
            brr[i][k] =arr[j][i];
        }
        k--;
    }

    for(int j =0; j<4; j++){
        for(int i =0; i<4; i++){
            printf("%d\t",brr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    
    k = 3;
    for(int j =0; j<4; j++){
        for(int i =0; i<4; i++){
            arr[i][k] =brr[j][i];
        }
        k--;
    }

    for(int j =0; j<4; j++){
        for(int i =0; i<4; i++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    

}