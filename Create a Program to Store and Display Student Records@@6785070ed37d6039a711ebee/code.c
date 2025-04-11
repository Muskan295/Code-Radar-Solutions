#include<stdio.h>
struct Student{
    int RollNo;
    char Name[50];
    float Marks;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",struct Student s[i]);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s,Marks: %.2f",s[i].RollNo,strcpy(s[i].Name,s[i]),s[i].Marks);
    }
    return 0;

}