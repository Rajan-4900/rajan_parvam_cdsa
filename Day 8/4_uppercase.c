#include<stdio.h>
// without using inbuilt function
int main(){
    char str[]="hello, world";
    int i=0;

    while(str[i]!='\0'){//e
        if(str[i]>='a' && str[i]<='z'){//alpha
            str[i]=str[i]-'a' +'A';//ascii e-97+65=>e-32//upper
        }
        i++;
    }
    printf("Uppercase string: %s\n",str);//HELLO,WORLD!
    return 0;
}