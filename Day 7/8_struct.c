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
    struct Day p1={11, "Sunday", "fed", 1.30};
    printf("date is: %d\n",p1.date);
    printf("Day is: %s\n",p1.Day);
    printf("month is: %s\n",p1.month);
    printf("time is: %.2f\n",p1.time);

    return 0;
}