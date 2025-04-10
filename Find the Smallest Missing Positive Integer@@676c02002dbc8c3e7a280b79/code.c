#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-i-1;j++){
            arr[i]=arr[j];
        }printf("%d",arr[i]);
    }
    return 0;
}