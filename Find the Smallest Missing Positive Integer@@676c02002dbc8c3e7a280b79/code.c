#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[n];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N-i-1;j++){
            arr[i]=arr[j];
        }printf("%d",arr[i]);
    }
    return 0;
}