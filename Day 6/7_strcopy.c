#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50];
    strcpy(b,a);
    printf("%s\n",b);
    printf("copies string is %s\n" ,b);
    printf("length of cpy str is %d\n",strlen(b));
    return 0;
}