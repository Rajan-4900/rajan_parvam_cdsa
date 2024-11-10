#include<stdio.h>
int main(){
    char a[20];
    printf("enter the name:");
         fgets(a,sizeof(a),stdin);
      printf(" the name is :  %s",a);

    return 0;
}