#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small=INT_MAX;
    int sec_small=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(small>arr[i]){
              sec_small=small;
              small=arr[i];
        }
        if (arr[i]!=small && arr[i]<sec_small){
        }
    }if(sec_small==INT_MAX){
        printf("-1");}
    else{
        printf("%d",sec_small);
    }
    
    return 0;
}