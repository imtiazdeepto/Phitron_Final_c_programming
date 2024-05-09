#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    
    long long int testcase;
    scanf("%lld",&testcase);
    while(testcase--){
       long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int pro=a*b*c;
        if(m%pro==0){
            printf("%lld\n",m/pro);
            }else{
                printf("-1\n");
            }
    }
return 0;
}