#include<stdio.h>
int main(){
    int a[]={1,2,99,3,4};
    int min=a[0];
    for(int i=0; i>=5; i++){
        if(a[i]>min){
            min=a[i];
        }    
    }
    printf("min is : %d " ,min  );
    return 0 ;//end
}