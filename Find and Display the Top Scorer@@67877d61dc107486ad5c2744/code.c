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
    int top_score=0;
    for(int i=0;i<n;i++){
        if(s[top_score].Marks < s[i].Marks){
            top_score= i;
        }
    }
     printf("Top Scorer: Roll Number: %d, Name: %s,Marks: %.2f\n",s[top_score].RollNo,s[top_score].Name,s[top_score].Marks);
  return 0;
}