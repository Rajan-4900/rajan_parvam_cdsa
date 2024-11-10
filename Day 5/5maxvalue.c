#include<stdio.h>
int main(){
    int arr[]={1,2,99,3,4};
    int max=arr[0];//[0]-->>index value
    for(int i=0; i<=5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("max is : %d " ,max  );
    return 0 ;//end
}