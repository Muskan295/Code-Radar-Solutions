#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[j]!=arr[j+1]){
               continue;
            }
        }
    }
    printf("%d ",arr[j]);
    return 0;
}