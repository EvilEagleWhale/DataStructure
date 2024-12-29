#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("百元 %d\n", n / 100);
    n %= 100;
    printf("十元 %d\n", n / 10);
    n %= 10;
    printf("壹元 %d\n", n);
    return 0;
}