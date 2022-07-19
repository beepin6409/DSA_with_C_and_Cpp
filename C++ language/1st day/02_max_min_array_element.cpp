#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
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

    cout<<"The maximum value in the array is "<<max<<" and the minimum value in the array is "<<min;




    return 0;
}