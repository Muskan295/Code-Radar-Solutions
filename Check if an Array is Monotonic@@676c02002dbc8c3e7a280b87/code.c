#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<N;i++){
    if((arr[i]<arr[i+1])|| (arr[i]>arr[i+1])){
        printf("YES");
        break;
    }
    else{
        printf("NO");
        break;
    }
}
return 0;
}