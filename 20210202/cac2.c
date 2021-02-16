/*
    달팽이
*/
#include<stdio.h>

void main(){
    int len = 8;
    int arr[100][100] = {0,};

    int cur_cal = 0;
    int k = 1;
    // block 1,2,3,4 
    // 1은 오른쪽으로 2는 밑으로 3은 왼쪽으로 4는 오른쪽
    int block = 1;
    int i=0,j=0;
    while(1){
        if(arr[i][j]==0){
            printf("%d %d\n",i,j);
            arr[i][j] = k++;
            // 0,0 0,1 0,2 0,3 0,4
            // 1은 오른쪽으로... j증가
            if(block ==1){
                j++;
                if(j==len-cur_cal){
                    block = 2;
                    printf("j = %d",j);
                    j--;
                    i++;
                }
            }
            // 2는 밑으로 i증가
            else if(block ==2){
                i++;
                if(i==len-cur_cal){
                    block = 3;
                    
                    i--;
                    j--;
                }
            }
            // 3은 왼쪽으로 j감소
            else if(block ==3){
                j--;
                if(j==-1+cur_cal){
                    block = 4;
                    i--;
                    j++;
                }
            }
            // 4는 위쪽으로 i감소
            else if(block ==4){
                i--;
                if(i==0+cur_cal){
                    block = 1;
                    cur_cal +=1;
                    i=cur_cal;
                    j=cur_cal;
                }
            }
        }
        else{
            break;
        }
        if(i<0 || j<0)
            break;
    }

    for(int i =0; i<len; i++){
        for(int j=0; j<len; j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
}