#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of element: ");
    scanf("%d",&n);//0
    // Dynamically allocated memory for n integer
    // void* malloc(size_t size);
    // typecasting from void* to int*
    int* array = (int*)malloc(n*sizeof(int));//4*4=16
    if(array == NULL){  //check if memory allocation was succesfull
        printf("memory allocation failed\n");
        return 1;
    }
    //Input element int the array
    printf("enter %d elements:\n",n);
    for(int i=0; i<n; i++){//4<4-f
        scanf("%d",&array[i]);//10 20 30 40
    }
    //Display the element
    printf("You entered: ");
    for(int i=0; i<n; i++){// 0 to 4
        printf("%d ",array[i]);//10 20 30 40
    }
    printf("\n");

    //free the allocated memory
    free(array);//memory deallocating

    return 0;
}
