#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N-1;j++){
            if(arr[i]>arr[i+1]){
                arr[i]=arr[i+1];
            };
        }printf("%d ",arr[i]);
    }
    return 0;
}