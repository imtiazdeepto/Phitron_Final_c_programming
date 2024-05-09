#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int main(){
    
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
     if (r != c) {
        printf("NO\n");
        return 0;
    }
    int count = 0;
    bool found = true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);

            if((i == j && a[i][j] != 1) || (j == (r - i - 1) && a[i][j] != 1)) {
                found = false;
                break;
            }
            
            if(i != j && j != (r - i - 1) && a[i][j] != 0) {
                found = false;
                break;
            }
        }
    }
    if(found){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
return 0;
}