#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void sort(int arr[],int arrSize){
    for(int i=0; i<arrSize; i++){
        for(int j=0; j<arrSize-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    
    int testcase;
    scanf("%d",&testcase);
    while (testcase--)
    {
       int arrSize;
       scanf("%d",&arrSize);
       int a[arrSize];
       int b[arrSize];
       for(int i=0; i<arrSize; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
       }
    sort(b,arrSize);
    for(int i=0; i<arrSize; i++){
        printf("%d  ",abs(a[i]-b[i]));
    }printf("\n");

    }
    
    
return 0;
}