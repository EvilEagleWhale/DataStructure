#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n - 2; i++)
        if(i % 2 == 1)
            printf("%d ", i);
    if(n % 2 == 0)
        printf("%d\n", n - 1);
    else
        printf("%d\n", n);
    return 0;
}