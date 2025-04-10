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
        if((larg<arr[i])&&(arr[i]>arr[i+1])){
             printf("%d",arr[i]);
             break;
        }
        if(arr[i]>=arr[i+1]){
            printf("%d",-1);
            break;
        }

    }return 0;
}