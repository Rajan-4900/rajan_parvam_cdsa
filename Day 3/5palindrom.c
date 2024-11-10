#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("enter the number ");
    scanf("%d", &num);
    int org = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (org == rev)
    {
        printf("%d a palindrom", org);
    }
    else{
        printf("%d is not a palindrom, because %d is not matching the pattern: %d", org, org, rev);
    }
}

// 121 | 121
// 1221 | 1221
// 3223 | 3223
// 3123 | 3213

// 5
// // 0 1 2 3 4 5
// // 0 0+1 0+1+2 0+1+2+3 0+1+2+3+4 0+1+2+3+4+5
// // 0 1 3 6 10 15