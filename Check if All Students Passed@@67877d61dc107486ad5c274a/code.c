#include<stdio.h>
struct Student{
    int RollNo;
    char Name[50];
    float Marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
    scanf("%d  %s %f",&s[i].RollNo,&s[i].Name,&s[i].Marks);
    }
    float threshold=50;
    int count=0;
    for(int i=0;i<n;i++){
        if(threshold<s[i].Marks){
            printf("All Passed");
            count=1;
            break;
        }}
        if(!count){
          printf("Not All Passed");
        }
    return 0;
}