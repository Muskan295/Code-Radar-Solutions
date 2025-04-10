#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            arr[j]=arr[i];
        }printf("%d ",arr[j]);
    }
    return 0;
}