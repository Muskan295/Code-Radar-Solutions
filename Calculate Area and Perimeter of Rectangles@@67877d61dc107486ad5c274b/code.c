#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Rectangle s[n];
    for(int i=0;i<n;i++){
    scanf("%d  %d",&s[i].length,&s[i].length);
    }
    float area=s[i].length*s[i].breadth;
    float perimeter=2*(s[i].length+s[i].breadth);
    for(int i=0;i<n;i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,area,perimeter);
        }

    return 0;
}