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
    int top_score=s[0].Marks;
    for(int i=0;i<n;i++){
        if(top_score <s[i].Marks){
            top_score=s[i].Marks;
        }
     printf("Roll Number: %d, Name: %s,Marks: %.2f\n",s[i].RollNo,s[i].Name,top_score);}
  return 0;
}