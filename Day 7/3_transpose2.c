#include<stdio.h>
int main(){
    int arr[3][3]={
        {2,5,6},
        {6,8,9},
        {2,7,4}
    };
    int transpose[3][3];
    // copying element from a matrix and finding the transpose
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[j][i]=arr[i][j];
        }
    }
    // printing the transpose of a matrix
    printf("Transpose Matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}