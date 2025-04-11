#include<stdio.h>
struct Student{
    int RollNo;
    char Name[50];
    float Marks;
    char Grade;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
    scanf("%d  %s %f",&s[i].RollNo,&s[i].Name,&s[i].Marks);
    }
    for(int i=0;i<n;i++){
        if(s[i].Marks >= 85.00){
            s[i].Grade = 'A';
        }
        if (s[i].Marks>=70.00 && s[i].Marks<=84.00){
            s[i].Grade = 'B';
        }
        if(s[i].Marks < 70.00){
            s[i].Grade = 'C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c\n",s[i].RollNo,s[i].Name,s[i].Grade);
    }
    return 0;

}