#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for (int i=0;i<N;i++){
        if((arr[i]%2==0)){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}