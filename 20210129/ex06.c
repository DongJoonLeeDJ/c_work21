#include <stdio.h>

void main(){

    int arr[3][3];
    /*
        4,4,4
        4,4,4
        4,4,4  = 36 / 4 = 9
    */

    int i =0;
    int j =0; 
    // 2차원배열요소 입력받기
    // printf("%d",sizeof(arr)/sizeof(arr[0]));
    for(i = 0; i<sizeof(arr)/sizeof(arr[i]); i++){
        for(j = 0; j<sizeof(arr[i])/sizeof(int) ; j++){
            printf("숫자 입력 : = \n");
            scanf("%d",&arr[i][j]);
        }
    }

    // 2차원배열요소 출력하기
    for(i = 0; i< 3; i++){
        for(j = 0; j<3 ; j++){
            printf("숫자 출력 : = %d\n",arr[i][j]);
        }
    }
}