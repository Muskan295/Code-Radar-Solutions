#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if (ch>=97 && ch<=122){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}