#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a;
        int x;
        scanf("%d",&x);
    int T=0,P=0;
    for(int i=0;i<x;i++){
        scanf(" %c",&a);
        if(a=='T')T++;
        else if(a=='P')P++;
        
    } 
    if(T>P)printf("Tiger\n");
    else if(T<P)printf("Pathaan\n");
    else if(T==P)printf("Draw\n");
    
    }

return 0;
}