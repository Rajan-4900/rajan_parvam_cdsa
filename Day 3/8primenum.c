#include<stdio.h>
int main(){
    int num=3;
    if(num==0 || num==1){
        printf("the num is not prime");
    }
    else if(num==2){
        printf("the num is prime");
    } 
    else{
        for(int i=2; i*i<=num; i++){//2*2=4 , 4<7
            if(num*i!=0){
                printf("the num is not prime");
                break;
            }
            else{
                printf("The num is prime");
            }
        }
    }
    return 0;
}