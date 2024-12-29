#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 3; i++){
        printf("%d,", n % 10);
        n /= 10;
    }
    printf("%d\n",n);
    return 0;
}