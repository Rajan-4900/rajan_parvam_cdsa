#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter the number");
    scanf("%d", &num);
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}
// tracing
// stp 1: 
// 123>0 True
// rev=0*10+123%10=3//rev=3
// num=123/10=12//numm=12
// stp2:
// 12>0=true
// rev=3*10+12%10//rev=32
// num=12/10=1//num=1
// stp 3:
// 1>0= T
// rev=32*10+1%10=321//rev=321
// num=1/10=0//numm=0
// stp 4:
// 0>0=0 F