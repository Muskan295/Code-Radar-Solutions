#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%s",&str);
    int n=strlen(str);
    char arr=str;
    for(int i=0;i<n;i++){
         rev[i]=str[n-1-i];
    }
    if(rev==arr){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}