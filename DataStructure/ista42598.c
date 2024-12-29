#include <stdlib.h>
#include <stdio.h>

int main(){
    int a,b,c,mx;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
        mx = a;
    else
        mx = b;
    if(c > mx)
        mx = c;
    printf("%d\n", mx);
    return 0;
}