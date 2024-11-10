#include<stdio.h>
int add(int x, int y){
    int c=x+y;
    return c;
}
int main(){
    // add(20,400) or
    int a=20, b=400;
    int sum=add(a,b);//calling function
    printf("%d",sum);
    return 0;
}