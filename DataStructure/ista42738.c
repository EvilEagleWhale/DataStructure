#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, a, b, c, x;
    scanf("%d", &n);
    x = n;
    a = n / 100;
    n %= 100;
    b = n / 10;
    n %= 10;
    c = n;
    if(a * a * a + b * b * b + c * c * c == x)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}