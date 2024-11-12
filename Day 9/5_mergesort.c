#include<stdio.h>

//function to merge two sorted arrays
void mergeArrays(int arr1[], int m, int arr2[], int n){
    int i=0, j=0, k=0;
    int merged[m+n];

    //Merge smaller elements first
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            merged[k++]=arr1[i++];
        }else{
            merged[k++]=arr2[j++];
        }
    }

    //copy remaining elements from arr1, if any
    while(i<m){//5<5
        merged[k++]=arr1[i++];//merge[8]=10 5
    }

    //copy remaining elements from arr2, if any
    while(j<n){
        merged[k++]=arr2[j++];
    }

    //print the merge array
    printf("Merge Array: ");
    for(k=0; k<m + n; k++) {//0 to 5+4=9 i<9 [0 to 8]
        printf("%d ",merged[k]);//1 2 3 4 5 6 7 8 10
    }
    printf("\n");
}
//Driver code
int main(){
    int arr1[]={1,3,5,7,10};
    int m=sizeof(arr1)/sizeof(arr1[0]);//5*4/4=5

    int arr2[]={2,4,6,8};
    int n=sizeof(arr2)/sizeof(arr2[0]);

    printf("Array 1: ");
    for(int i=0; i<m; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("Array 1: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    mergeArrays(arr1, m, arr2, n); //4 4

    return 0;
}