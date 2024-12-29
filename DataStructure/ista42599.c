#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    long long m;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i ++){
        scanf("%lld", &m);
        printf("%lld %lld %lld\n", m, m * m, m * m * m);
    }
    return 0;
}