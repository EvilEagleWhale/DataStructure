#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int p;
    scanf("%d", &p);
    if(p >= 100)
        printf("%d\n", p * 70);
    else if(p >= 30)
        printf("%d\n", p * 80);
    else if(p >= 10)
        printf("%d\n", p * 90);
    else
        printf("%d\n", p * 100);
    return 0;
}