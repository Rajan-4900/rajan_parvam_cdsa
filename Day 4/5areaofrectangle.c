#include<stdio.h>
int main(){
    int b=5,l=20;
    int res=area(b,l);//passing the area
    printf("%d",res);
    return 0;
}
int area(int b,int l){
    int c=b*l;
    return c;
}