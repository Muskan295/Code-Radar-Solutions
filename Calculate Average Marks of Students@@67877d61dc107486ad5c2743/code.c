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
    int total=0;
    for(int i=0;i<n;i++){
        total+=s[i].Marks;
    }
    int average=total/n;
    printf("Average Marks: %.2f",average);

    return 0;

}