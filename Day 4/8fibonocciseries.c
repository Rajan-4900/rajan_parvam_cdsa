#include<stdio.h>
int main(){
    int num=5;
    int res=fib(num);
    printf("%d",res);
    return 0;
}
int fib(int n){
    if((n==0)||(n==1)){
        return n;
    }else {
        return fib(n-1)+fib(n-2);
    }    
}