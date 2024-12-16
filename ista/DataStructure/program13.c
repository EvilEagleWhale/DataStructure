#include <stdlib.h>
#include <stdio.h>

int main(){
    double h,w;
    scanf("%lf %lf",&w,&h);
    h /= 100;
    printf("%.2lf\n", w / h / h);
    return 0;
}