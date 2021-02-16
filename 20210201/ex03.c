/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고, 짝수이면 뒤에서부터
채워나가는 형식을 취하기로 하자. 따라서 사용자가 [1,2,3,4,5,6,7,8,9,10]을
입력했다면 배열에는 [1,3,5,7,9,10,8,6,4,2]의 순으로 저장이 되어야한다.
*/

#include <stdio.h>

void main(){
    int arr[10];

    // [ 100, 104 ,108, 112, 116, 120, 124, 128, 132, 136 ]
    // fip = 100
    // eip = 136

    // 한줄에 입력할시...
    // int *fip = &arr[0];
    // 두줄에 입력할시...
    int *fip;
    fip = &arr[0];

    int *eip = &arr[9];

    int i =0;

    while(i<10){
        // printf("%d ",i);
        int temp = 0;
        printf("정수 입력 ");
        scanf("%d",&temp);

        // 홀수
        if(temp%2==1){
            *fip = temp;    // 100번지에 4바이트 공간에 temp 값을 넣어라
            printf("ftp 주소값 = %d",fip);
            fip = fip+1;    // 100 + 4 = 104
            printf("ftp 주소값 = %d",fip);

        }
        // 짝수
        else{
            *eip = temp;
            printf("eip 주소값 = %d",eip);
            eip = eip-1;    
            printf("eip 주소값 = %d",eip);
        }
        i++;
    }

    for(i=0; i<10; i++ ){
        // printf("arr[%d] = %d\n",i,arr[i]);
    }
}