#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n,sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0 && i % 3 ==0 && i % 12 != 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}