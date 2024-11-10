#include<stdio.h>
int main(){
char str[20];
printf("enter name");
// scanf("%s",name);
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]=0;
printf("the name is: %s\n",str);
int length=strlen(str);
printf("%d is the length of the string",length);

return 0;
}