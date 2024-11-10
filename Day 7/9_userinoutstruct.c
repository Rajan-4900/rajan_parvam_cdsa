#include<stdio.h>
#include<string.h>
int main(){
    struct Day{
        int date;
        char Day[20];
        char month[10];
        float time;
    };
    // initializing struct
    struct Day p1;
    printf("enter the Day:");
    fgets(p1.Day,sizeof(p1.Day),stdin);
    p1.Day[strcspn(p1.Day,"\n")]=0;

    printf("Enter the Date: ");
    scanf("%d",&p1.date);

    printf("Enter the month: ");
    scanf("%s",&p1.month);

    printf("Enter the time: ");
    scanf("%f",&p1.time);

    printf("\n");

    printf("date is: %d\n",p1.date);
    printf("Day is: %s\n",p1.Day);
    printf("month is: %s\n",p1.month); 
    printf("time is: %.2f\n",p1.time);

    return 0;
}