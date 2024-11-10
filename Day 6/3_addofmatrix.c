#include<stdio.h>
int main (){
    int row,col;
    printf("Enter the rows and value: ");
    scanf("%d",&row);
    scanf("%d",&col);
    int a[row][col];
    prinf("Enter the elements: ");
    for(int i=0; i<row; i++){
        for(int j=0; i<col; j++);
        scanf("%d",&a[row][col]);
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    return 0;

}