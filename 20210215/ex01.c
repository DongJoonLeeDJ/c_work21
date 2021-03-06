/*
    달팽이 배열..
*/
#include <stdio.h>

int len = 5;
int cur = 0;

void doPrint(int (*arr)[100]){
    for(int i =0; i<len ; i++){
        for(int j=0; j<len ; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
// 1 오른쪽 , 2 아래, 3 왼쪽, 4 위
typedef enum {
    right = 1,
    down = 2,
    left = 3,
    up = 4
} Drection;

void main(){
    printf("배열 크기 입력");
    scanf("%d",&len);
    
    int arr[100][100] ={0,};
    Drection drec = right;   
    /*
        1  2  3  4  5
        16 17 18 19 6
        15 24 25 20 7
        14 23 22 21 8
        13 12 11 10 9
    */
    int value = 1;
    int i =0,j=0;
    while(1){
        if(arr[i][j] != 0){
            // printf("되나");
            break;
        }
        if(drec == right){
            arr[i][j] = value++;
            j++;
            if((len-cur) == j){
                drec = 2; // 지금 좌표는 0,5
                i = i+1;    // i = 1
                j = j-1;    // j = 4
            }
        }
        else if(drec == up){ // 1,4 -> 2,3 ->3,3 -> 4,3
             arr[i][j] = value++;
             i++;
             if((len-cur) == i){
                 // 5 4 -> 4 3
                // printf("\narr[%d][%d] = %d\n",i,j,arr[i][j]);
                drec = 3;
                i--;
                j--;
                // printf("\narr[%d][%d] = %d\n",i,j,arr[i][j]);
             }
        }
// \\192.168.0.111\_2021인공지능
// \020.c언어_윤성우pdf\쌤소스\c_work21\20210215
        else if(drec == left){
            arr[i][j] = value++;
            j--;
            if( j == (-1+cur) ){  // 4, -1
                drec=4;
                i--;
                j++;
            }
        }
        else if(drec == down){
            arr[i][j] = value++;
            i--;
            if(i == (0+cur)){
                printf("\narr[%d][%d] = %d\n",i,j,arr[i][j]);
                drec = 1;
                cur = cur + 1;
                i = cur, j = cur;
            }
        }
    }

     doPrint(arr);
}