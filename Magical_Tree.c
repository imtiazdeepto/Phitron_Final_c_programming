#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rows =((n+1)/2)+5;
    
    for (int i = 1; i <= rows; ++i) {

        for (int j = 1; j <= rows - i; ++j)  printf(" ");
        
        for (int k = 1; k <= 2 * i - 1; ++k) printf("*");

        printf("\n");
    }
    for(int i = 1; i <= 5; ++i){
        for(int j = 1; j <=5;++j) printf(" ");
        for(int k = 1; k <= n; ++k)printf("*");
        
        printf("\n");
    }
        return 0;
    }