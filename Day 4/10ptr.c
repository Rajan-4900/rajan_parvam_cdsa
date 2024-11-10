#include<stdio.h>
int main(){
    int a=10;
    int*ptr;
    ptr=&a;
    printf("the value of a is %d\n",a);
    printf("the address of a is %u\n",&a);
    printf("the  ptr is %u\n",ptr);
    printf("the value of ptr  is %d\n",*ptr);
    return 0;
}