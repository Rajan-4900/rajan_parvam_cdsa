#include<stdio.h>

//function to perform insertion sort
void insertionSort(int arr[],int n){
    int i, key, j;
    for(i=1; i<n; i++){//1+4 4<5
        key=arr[i];//key-arr[4]=9
        j=i-1;
        
        //Move element of arr[0..i-1]thet are greater than key to one possition ahead
        while(j>=0 && arr[j]>key){//2>=0 && 8>1
            arr[j+1]=arr[j];//arr[3]=8//2 5 1 8 9
            j=j-1;//j=0=>//j=1
        }
        arr[j+1]=key;//arr[2]=1 
    }
}

//function to print the array

void printArray(int arr[],int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//Drive code
int main(){
    int arr[]={5,2,8,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);//4*5/4 =5
    printf("Original array: ");
    printArray(arr,n);
    insertionSort(arr,n);
    printf("Sorting array: ");
    printArray(arr,n);
    return 0;
}