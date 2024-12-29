#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int n,a;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i ++){
        scanf("%d", &a);
        if(a > 31){
            printf("Value of more than 31\n");
            continue;
        }
        long long ans = 1;
        for(int j = 0; j < a; j ++)
            ans <<= 1;
        printf("%lld\n", ans);
    }
    return 0;
}