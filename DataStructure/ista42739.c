#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        double x;
        scanf("%lf", &x);
        if(x < 18.5)
            printf("體重過輕\n");
        else if(x < 24)
            printf("正常\n");
        else if(x < 28)
            printf("體重過重\n");
        else
            printf("肥胖\n");
    }
    return 0;
}