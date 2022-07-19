#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }
    int max=0,min=__INT16_MAX__;
    int *a=arr;
    for(int i=0;i<n;i++){
        if(*(a+i)>max){
            max=*(a+i);
        }
        if(*(a+i)<min){
            min=*(a+i);
        }
    }

    printf("The maximum value in the array is %d and the minimum value in the array is %d",max,min);
    return 0;
}