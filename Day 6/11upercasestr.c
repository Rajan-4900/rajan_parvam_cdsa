#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="hello";
    char b[50];
    char c[50]="World";
      strcpy(b,a);
    printf("%s\n",b);
    printf("copies string is %s\n" ,b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
      strcat(b,c);
    printf("concatinated str1 %s\n",b);
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
         printf("both string are eual");
    }
    else if (res==-1){
        printf("str1 is lesser than str2");
    }
    else{
        printf("string1 is greater than str2\n");
    }
    printf("%s\n",strrev(a));
    for(int i=0; a[i]!='\0'; i++){
        a[i]=toupper(a[i]);
    }
    printf("%s" ,a);
    return 0;
}
