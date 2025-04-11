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
    float threshold;
    int count=0;
    scanf("%f",&threshold);
    for(int i=0;i<n;i++){
        if(threshold<s[i].Marks){
            count++;
        }printf("Counts of students scoring above %d: %d",threshold,count);
     }
    return 0;
}