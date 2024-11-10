#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr=arr;////1st index-->2
    printf("%d\n",*(ptr+2));//
    return 0;
}