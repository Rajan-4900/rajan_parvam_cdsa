#include<stdio.h>
int main(){
    int n1=0;
    int n2=1;
    int n=5; // we can do Scanf also
    for(int i=1; i<=n; i++){
        int n3=n1+n2;//1+1=2
        printf("%d ",n1);//0 1 1 2 3
        n1=n2;// 5
        n2=n3;// 8
    }
    return 0;
}