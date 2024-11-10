#include<stdio.h>
int main(){
    int  num=5;//global
    int res=factorial(num);
    printf("%d",res);
    printf("%d",num);
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}