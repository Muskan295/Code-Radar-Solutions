#include <stdio.h>
int main() {
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    int result = number1 ^ number2;
    printf("%d", result);
    return 0;
}