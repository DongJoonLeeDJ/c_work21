#include <stdio.h>

void doA(char *arrp[3]){
    printf("arr[0]= %d\n",arrp[0]);
    printf("arr[1]= %d\n",arrp[1]);
    printf("arr[2]= %d\n",arrp[2]);

    printf("arrp[0] = %s \n", arrp[0]);
    printf("arrp[1] = %s \n", arrp[1]);
    printf("arrp[2] = %s \n", arrp[2]);

}
void main(){
    char *arrp[3] = {"aaa","bbb","ccc"};

    // printf("arr[0]= %d\n",arrp[0]);
    // printf("arr[1]= %d\n",arrp[1]);
    // printf("arr[2]= %d\n",arrp[2]);

    // printf("arrp[0] = %s \n", arrp[0]);
    // printf("arrp[1] = %s \n", arrp[1]);
    // printf("arrp[2] = %s \n", arrp[2]);
    doA(arrp);
}