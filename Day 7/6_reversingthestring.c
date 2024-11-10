#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="hello, world";
    int start =0;
    int end =strlen(str)-1;
    char Temp;
    while(start<end){//6<6
        Temp =str[start];
        str[start]= str[end];
        str[end]=Temp;
        start++;
        end--;
    }
    printf("reversed string: %s\n" ,str);
    return 0;
}