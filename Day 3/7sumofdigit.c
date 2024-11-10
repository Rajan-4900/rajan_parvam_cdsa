#include<stdio.h>
int main(){
    int num=123;
    int sum=0;
    int digit=0;
    while(num!=0){//0!=0
        digit=num%10;//1%10=
        sum=digit+sum;//3+0=3, 3+2=5, 
        num/=10;
    }
    printf("%d",sum);
    return 0;

}