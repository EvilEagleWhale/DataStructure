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
    if(det){
        printf("Not Triangle\n");
        return 0;
    }
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;
    if(a >= b && a >= c){
        if(c2 + b2 < a2)
            printf("Obtuse Triangle\n");
        else if(c2 + b2 == a2)
            printf("Right Triangle\n");
        else
            printf("Acute Triangle\n");
    }
    else if(b >= a && b >= c){
        if(c2 + a2 < b2)
            printf("Obtuse Triangle\n");
        else if(c2 + a2 == b2)
            printf("Right Triangle\n");
        else
            printf("Acute Triangle\n");
    }
    else if(c >= b && c >= a){
        if(a2 + b2 < c2)
            printf("Obtuse Triangle\n");
        else if(a2 + b2 == c2)
            printf("Right Triangle\n");
        else
            printf("Acute Triangle\n");
    }
    return 0;
}