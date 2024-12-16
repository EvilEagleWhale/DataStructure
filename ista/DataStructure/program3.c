#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    double l;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &l);
        printf("%.1lf\n", l * l);
    }
    return 0;
}