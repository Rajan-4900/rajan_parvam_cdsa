#include<stdio.h>
// without using inbuilt function
int main(){
    char str[]="Hello, World";
    int i=0;

    while(str[i]!='\0'){//e
        if(str[i]>='a' && str[i]<='z'){//alpha
            str[i]=str[i]-'a' +'A';//ascii e-97+65=>e-32//upper
        }
        i++;
    }
    printf("Uppercase string: %s\n",str);//HELLO,WORLD!
    i=0;
    while(str[i]!='\0'){//e 
        if(str[i]>='A' && str[i]<='Z'){//alpha to upper case only!
            str[i]=str[i]-'A' +'a';//ascii e-97+65=>e-32//lower
        }
        i++;
    }
    printf("Lowercase string: %s\n",str);//hello,world!
    return 0;
}