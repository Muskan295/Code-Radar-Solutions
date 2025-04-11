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
    scanf("%d %s %f",&s[i].RollNo,&s[i].Name,&s[i].Marks);
    }
    int low_score=0;
    for(int i=0;i<n;i++){
        if(s[low_score].Marks > s[i].Marks){
            low_score= i;
        }
    }
     printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",s[low_score].RollNo,s[low_score].Name,s[low_score].Marks);
  return 0;
}