#include <stdio.h>
#define MAX 100

int main(){
    int  i = 0, j;
    char s[MAX], c;

    printf("Enter some number:");
    while((c = getchar()) != '\n'){
        s[i] = c;
        i += 1;
    }
    j = i;

    char temp;
    char *px = &s[0];
    char *py = &s[i - 1];

    temp = *px;
    *px = *py;
    *py = temp;

    for (i = 0; i < j; ++i){
        putchar(s[i]);
    }
}
