#include <stdio.h>
int main() {
    int n1,n2;
    char ch;
    scanf("%d %d %c",&n1,&n2,&ch);
    int sum = n1 + n2;
    int sub = n1 - n2;
    int multiply = n1 * n2;
    int div = n2!=0 ? n1/n2:0;
    switch (ch){
         case '+':printf("%d\n",sum);break;
         case '-':printf("%d\n",sub);break;
         case '*':printf("%d\n",multiply);break;
         case '/':
         if(n2!=0){printf("%d\n",div);}
         else{printf("error\n");}break;
         default:printf("error");}
         return 0;
}