#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
        printf("Lowercase\n");
    }
    else if(ch>=65 && ch<=90){
        printf("Uppercase\n");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}