#include<stdio.h>
int main(){
    //Implecit
    int a=50;
    float b=a;
    printf("%.4f\n",b);

//explicit
    float c=50.0;
    int d=c;
    printf("%d\n",d);
    return 0;
}