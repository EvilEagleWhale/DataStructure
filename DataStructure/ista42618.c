#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);
        if(y < x){
            int t = x;
            x = y;
            y = t;
        }
        for(int j = x; j <= y; j++)
            sum += j;
        printf("%d\n", sum);
    }
    return 0;
}