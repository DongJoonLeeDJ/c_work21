/*
도전 2
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를
2진수로 변환해서 출력하는 프로그램을 작성해보자.

10진수 정수입력 :12
12 % 2 = 0 제일 끝자리수
6 % 2 = 0
3 % 2 = 1
1

1100

도전 3
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고, 짝수이면 뒤에서부터
채워나가는 형식을 취하기로 하자. 따라서 사용자가 [1,2,3,4,5,6,7,8,9,10]을
입력했다면 배열에는 [1,3,5,7,9,10,8,6,4,2]의 순으로 저장이 되어야한다.
*/
#include <stdio.h>

void main(){
    int arr[100];
    int cnt=0; 

    int input_number = 0;
    int rema_number = 0;

    printf("정수 입력\n");
    scanf("%d",&input_number);

    printf("input_number = %d\n", input_number);
    /*
        input_number = 12 -> 6 -> 3
        temp_value = 6 -> 3 -> 1
        cnt = 0 -> 1 -> 2 -> 3 -> 4
        arr[0] = 0, arr[1] = 0, arr[2] = 1 ,arr[3] = 1
    */
    while (input_number > 1){
        rema_number = input_number % 2;

        arr[cnt] = rema_number;
        cnt++;

        int temp_value = input_number/2;
        if(temp_value<2){
            arr[cnt] = temp_value;
            cnt++;
            break;
        }
        input_number = temp_value;
    }
    //arr[0] = 0, arr[1] = 0, arr[2] = 1 ,arr[3] = 1
    int i=0;
    // i--  , i-=1 , i = i-1
    for(i=cnt-1; i>-1; i-- ){   //3 2 1 0
        printf("%d ",arr[i]);
    }
}