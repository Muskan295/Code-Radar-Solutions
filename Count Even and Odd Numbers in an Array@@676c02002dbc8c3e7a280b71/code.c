#include<stdio.h>
int main(){
    int N;arr[N];
    for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]);
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<N;i++){
        if (arr[i]%2==0){
             even_count+=1;
        }
        else{
            odd_count+=1;
        }
    }printf("%d %d",even_count,odd_count);
    return 0;
}