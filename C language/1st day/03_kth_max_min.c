#include <stdio.h>
int main(){
    int n,k;
    printf("Enter the size of array and value of k");
    scanf("%d %d",&n,&k);
    printf("Enter the array elements");
    int arr[n]; 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int iteration =1;
    while(iteration<n){
        for(int i=0;i<(n-iteration);i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
        iteration++;
    }
    int kmax=arr[n-k];
    int kmin=arr[k-1];

    printf("The kth max element is %d and kth min element is %d",kmax,kmin);


    return 0;
}