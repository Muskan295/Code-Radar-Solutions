#include <stdio.h>
int main(){
    char signal;
    scanf("&c",&signal);
    if (signal=='R'){
        printf("Stop");
    }
    else if(signal=='Y'){
        printf("Slow Down");
    }
    else if(signal=='G'){
        printf("Go");
    }
    else{printf("Invalid input");
    }
    return 0;
}