#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int counted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        counted[i]=0;
    }
    for(int i=0;i<n;i++){
        if(counted[i])continue;
        int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[j]==arr[i]){
                    count++;
                    counted[j]=1;
                }
            }
int length=sizeof(arr[i])/sizeof(arr[0]);
int array[length];
for(int j=0;j<length;j++){
    array[length]=arr[j];
}

 }printf("%d",array[length]);
      return 0;  
}
   
