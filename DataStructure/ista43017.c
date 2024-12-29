#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[10000];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 1; i < n; i++)
        a[i] += a[i - 1];
    for(int i = 0 ;i < n - 1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n - 1]);
    return 0;
}