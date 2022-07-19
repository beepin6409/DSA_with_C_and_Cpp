#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The original array is\n");
    for(int i=0;i<n;i++){ 
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("\nThe array after reversing is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}