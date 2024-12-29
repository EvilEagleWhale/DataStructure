#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n,div = 10000;
    scanf("%d", &n);
    for(int i = 0; i < 5; i++){
        int t = n / div;
        while(t--)
            printf("*");
        printf("\n");
        n %= div;
        div /= 10;
    }
    return 0;
}