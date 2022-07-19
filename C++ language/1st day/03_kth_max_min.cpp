#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the size of array and value of k";
    cin>>n>>k;
    cout<<"Enter the array elements";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
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

    cout<<"The kth max element is "<<kmax<<" and kth min element is "<<kmin;


    return 0;
}