#include<stdio.h>
int main(){
    int num=5;
    int res =factorial(num);
    printf("%d",res);
    return 0;
}
 int factorial (int n){
    if (n==0){//5==0-F , 4==0-F, 3==0-F, 2==0-F, 1==0-F, 0==0-T
        return 1;

    }
    else{
        // recursion
        return n*factorial(n-1);//1*2*3*4*5*factorial(n-1)->>(5-1)=(4)....(0)
    }
}
