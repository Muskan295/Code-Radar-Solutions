#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int even=arr[0];
    for (int i=0;i<N;i++){
        if(arr[i]%2==0){
           if(even<arr[i]){
            even=arr[i];
           }
        }
       }  printf("%d ",even);
       else{
        printf("-1");
       }
    
    return 0;
}