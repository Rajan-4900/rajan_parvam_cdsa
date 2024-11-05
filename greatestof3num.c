#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter three no");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
// Using If else ladder (if else if).
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>c && b>a){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
}

