#include<stdio.h>
int main(){

    int a;
    float b;
    char c[10];
        printf("Enter a:");
    scanf("%d",&a);
        printf("Enter b:");
    scanf("%f",&b);
        printf("Enter c:");
    scanf("%s",&c);
        printf("a is a integer: %d\n",a);
        printf("b is a float type: %.2f\n",b);
        printf("c is a char type: %s\n",c);

    return 0;
}