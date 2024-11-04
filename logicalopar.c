#include<stdio.h>

int main(){
    int a;
    a=10;
    int b;
    b=20;
// AND
    if((a>5)&&(b>5)){
        printf("a & b are grater than 5\n");
    }
    else{
        printf("a & b are not grater than 5\n");
    }
// OR
    if((a>5)||(b>5)){
        printf("a & b are grater than 5\n");
    }
    else{
        printf("a & b are not grater than 5\n");
    }
// NOT
    int valid=1;
    int invalid=!valid;

    printf("%d\n",valid);
    printf("%d\n",invalid);

    return 0;
}