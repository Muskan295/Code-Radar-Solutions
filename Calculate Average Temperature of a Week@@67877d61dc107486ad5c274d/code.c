#include<stdio.h>
struct Day{
    char day[50];
    int temp;
};
int main(){
    int n=7;
    struct Day s[7];
    for(int i=0;i<n;i++){
    scanf("%s %d",&s[i].day,&s[i].temp);
    }
    float total=0;
    for(int i=0;i<n;i++){
        total+=s[i].temp;
    }
    float average = total/n;
    printf("Average Temperature: %.2f",average);

    return 0;

}