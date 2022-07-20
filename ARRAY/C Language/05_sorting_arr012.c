#include <stdio.h>
void sort012(int n,int *p){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(p+j)>=*(p+j+1)){
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;

        }
        }
    }
}
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort012(n,a);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}