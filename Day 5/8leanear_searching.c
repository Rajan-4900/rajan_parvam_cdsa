#include<stdio.h>
int main(){   
    int arr[]={1,2,4,3,5};
    int n=sizeof (arr)/sizeof (arr[0]);
      int target;
      printf("enter key value to be searched ");
      scanf("%d", &target);
       for(int i=0; i<=5; i++){
        if(target==arr[i]){
         printf("the element is present at index  %d\n",i);
         return 0;
        }
     }
printf("the element is not present");
return 0;
}

       