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
    int count=1;
    for(int i=0;i<n;i++){
        if(threshold>s[i].Marks){
            printf("Not All Passed");
            count=0;
            break;
        }
    }
        if(count){
          printf("All Passed");
        }
    return 0;
}