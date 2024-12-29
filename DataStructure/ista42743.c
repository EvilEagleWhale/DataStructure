#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c, det = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b <= c)
        det = 1;
    if(a + c <= b)
        det = 1;
    if(b + c <= a)
        det = 1;
    if(det)
        printf("unfit\n");
    else
        printf("fit\n");
    return 0;
}