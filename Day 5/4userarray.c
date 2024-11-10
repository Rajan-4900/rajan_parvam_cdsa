#include<stdio.h>
int main()
{
    int n ,arr[5];
    printf("enter the no of  element \n");
    scanf("%d",&n);
    printf("Enter 5 elements\n");
    for(int i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the arr elemtn are...");
    for(int i=0; i<=n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}