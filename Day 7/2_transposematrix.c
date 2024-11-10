#include<stdio.h>
int main(){
    int arr[2][2]={
        {2,5},
        {6,8}
    };
    printf("Original Matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
    printf("Transpose Matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}