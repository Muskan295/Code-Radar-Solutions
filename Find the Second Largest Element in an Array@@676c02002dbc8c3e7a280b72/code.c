#include<stdio.h>
int msin(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d ",&arr[N]);
    }
    int max=arr[0];
    int sec_max=arr[0];
    for(int j=0;j<N;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    for(int j=0;j<N;j++){
        if (max==arr[j]){
        }
        else if(sec_max<arr[j]){
            sec_max=arr[j];
        }
      

    }printf("%d",sec_max);
    return 0;
}