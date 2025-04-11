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
    for(int i=1;i<=n;i++){
        float area=s[i].length*s[i].breadth;
        float perimeter=2*(s[i].length+s[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,area,perimeter);
        }

    return 0;
}