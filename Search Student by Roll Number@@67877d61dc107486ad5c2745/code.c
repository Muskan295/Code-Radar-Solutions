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
    int search;
    int found=0;
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(search==s[i].RollNo){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].RollNo,s[i].Name,s[i].Marks);
        found=1;
        break;
     }}
     if(!found){
        printf("Student not found");
        break;
     }

    return 0;
}