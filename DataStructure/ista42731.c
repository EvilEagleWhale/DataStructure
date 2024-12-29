#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    if(n <= 2)
        printf("Winter\n");
    else if(n <= 5)
        printf("Spring\n");
    else if(n <= 8)
        printf("Summer\n");
    else if(n <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
}