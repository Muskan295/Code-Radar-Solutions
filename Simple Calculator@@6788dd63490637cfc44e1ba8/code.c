#include <stdio.h>
int main() {
    int n1,n2;
    char ch;
    scanf("%d %d %c",&n1,&n2,&ch);
    int sum = n1 + n2;
    int sub = n1 - n2;
    int multiply = n1 * n2;
    float div = (float)n1 / n2;
    switch (ch){
         case '+':printf("%d\n",sum);break;
         case '-':printf("%d\n",sub);break;
         case '*':printf("%d\n",multiply);break;
         case '/':printf("%.2f\n",div);break;
         default:printf("error");}
         return 0;
}