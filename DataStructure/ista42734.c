#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, x;
    scanf("%d", &n);
    for(int i = 0;i < n; i++){
        scanf("%d", &x);
        if(x < 60)
            printf("不及格\n");
        else if(x < 70)
            printf("丙等\n");
        else if(x < 80)
            printf("乙等\n");
        else if(x < 90)
            printf("甲等\n");
        else
            printf("優等\n");
    }
    return 0;
}