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
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(s[i].Marks > s[j].Marks){
            int temp=s[i].Marks;
            s[i].Marks=s[i+1].marks;
            s[i+1].Marks=temp;
        }
    }
   }
   for(int i=0;i<n;i++){
    printf("")
   }
  return 0;
}