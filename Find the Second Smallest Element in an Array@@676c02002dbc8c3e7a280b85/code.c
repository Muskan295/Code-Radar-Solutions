#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    int sec_small=arr[0];
    for(int i=0;i<n;i++){
        if(small>arr[i]){
              small=arr[i];
              sec_small=small;
        }
}
        printf("%d",sec_small);
    return 0;
}