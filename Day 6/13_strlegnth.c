#include<stdio.h>
#include<string.h>
int main (){
char str[100]="hello";
int length=0;
while(str[length]!='\0'){
    length++;
}
printf("the length of string without inbulit is: %d\n",length);
printf("the length of string with  inbulit is:  %d\n",strlen(str));

return 0;

}