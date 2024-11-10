#include<stdio.h>
int main(){
int n;
printf("Enter the no of elements");
scanf("%d", &n);//5
int arr[n];
printf("Enter 5 elements");
for(int i=0; i<n; i++){
scanf("%d",&arr[i]);// 17 200 30 100 10000 -> max=200
}
int max=arr[0];
for(int i=0; i<n; i++){//4
if(arr[i]>max){//10000>200=>T
max=arr[1];//10000
} 
}
printf("The max element is %d", max);//10000
return 0;
}
