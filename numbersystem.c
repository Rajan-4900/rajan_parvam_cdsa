#include<stdio.h>
int main(){

    int a=10;

    //decimal,octal,hexadecimal
    printf("%d\n",a);
    
    a=10;
    printf("%o\n",a);

    a=10;
    printf("%x\n",a);

    a=10;
    printf("%X\n\n",a);

    //float, string,char
    char b='a';
    printf("%c\n",b);

    char c[]="hello world";
    printf("%s\n",c);

    float f=1.00;
    printf("%f\n",f); 

    return 0;
}