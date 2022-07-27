//  Write a program to find the maximum till ith element

#include <stdio.h>



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int max=-9999999;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        printf("%d ",max);
        

    }
    

    return 0;


}
