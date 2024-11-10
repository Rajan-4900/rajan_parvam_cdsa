#include<stdio.h>
int main(){
    int arr[2][2]={
        {2,3},
        {4,5}};
    printf("Diagonal Elements:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==j){
                printf("%d ",arr[i][j]);//2 5
            }
        }
    }
    return 0;
}