#include<stdio.h>
int main(){
    int arr[]={64,34,25,12,22,11,90};//init....
    int n=sizeof(arr)/sizeof(arr[0]);//7*4/4=7
    int i, j, temp;

    printf("Original array: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}