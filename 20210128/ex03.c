#include <stdio.h>

void main(){
    char a[] = "abc";   // a b c \0
    char *b = "abc";    

    a[1] = '\0';
    // b[1] = '\0';
    b = "abcdefg";
    printf("%s %s",a,b);

}