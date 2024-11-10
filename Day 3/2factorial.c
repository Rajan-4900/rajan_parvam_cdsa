#include<stdio.h>
int main(){
    int i, fact=1;
    for(int i=1; i<10; i++){
        // fact++;hg
        fact=fact*i;
        //tracing :-
        // step 1: fact=1*1=1
        // step 2: fact=1*2=2
        // step 3: fact=2*3=6
        // step 4: fact=6*4=24
        // step 5: fact=24*5=120
        // step 6: fact=120*6=720
        // step 7: fact=720*7=5040
        // step 8: fact=5040*8=40320
        // step 9: fact=40320*9=362880
    }
    printf("factorial of 10 num: %d",fact);
    return 0;
}