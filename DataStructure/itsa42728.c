#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, y, x;
    scanf("%d", &n);
    for(int i = 0;i < n; i++){
        scanf("%d", &x);
        if(x >= 50 && x <= 70)
            y = x;
        else
            y = 100;
        printf("%d\n", y);
    }
    
}