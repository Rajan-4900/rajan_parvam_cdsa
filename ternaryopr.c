#include<stdio.h>
int main(){
    int a;
    int b;
//ternary oparator.
    printf("Enter the num a: \n");
    scanf("%d",&a);
    printf("Enter the num b: \n");
    scanf("%d",&b);
    printf("the final result is:\t");
    int res=(a>b) ?a:b;
    printf("%d",res);
    return 0;
}