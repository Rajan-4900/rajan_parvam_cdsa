#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="hello,";
    char str2[]="world";
    int i=0,j=0;
    // (0)str1(end)
    while(str1[i]!='\0'){// i=6==>null=null
        i++;
    }
    while(str2[j]!='\0'){
        str1[i++]=str2[j++];

    }
    int length=strlen(str1);
    printf("%d",length);
    str1[i]!='\0';
    printf("%s",str1);
    
    return 0;
}

    