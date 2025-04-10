#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
     int larg=arr[0];
    for(int i=0;i<n;i++){
         if(larg>arr[i]){
            printf("%d",larg);
            break;
        }
        else if((i==n-1 && arr[i]>arr[i-1])){
             printf("%d",arr[i]);
             break;
        }
        else if(i>0 && arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        if (i==n-1){
            printf("-1");
        }

    }return 0;
}