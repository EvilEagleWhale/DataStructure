#include <stdlib.h>
#include <stdio.h>

int main(){
    double h,t,b;
    scanf("%lf %lf %lf",&t, &b, &h);
    printf("Trapezoid area:%.1lf\n", (t + b) * h * 0.5);
    return 0;
}