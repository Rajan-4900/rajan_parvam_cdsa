#include<stdio.h>
int main(){
    int a=10;
    int b=20;

    // ==
    if(a==b){
        printf("a & b are eaqual\n");
    }
    else{
        printf("a & b are not equal\n");
    }
    //>
    if(a>b){
        printf("a is grater than b\n");
    }
    else{
        printf("a is not grater than b\n");
    }
    //<
    if(a<b){
        printf("a is less than b\n");
    }
    else{
        printf("a is not less than b\n");
    }
    //>=
    if(a>=b){
        printf("a is grater than or equal to b\n");
    }
    else{
        printf("a is not grater than or equal to b\n");
    }
    //<=
    if(a<=b){
        printf("a is less than or equal to b\n");
    }
    else{
        printf("a is not less than or equal to b\n");
    }
    // !=
    if(a!=b){
        printf("a is not equal  to b\n");
    }
    else{
        printf("a is equal to b\n");
    }
    return 0;
}