#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if (year%400==0)
        printf("%d the leap year",year);
    else if (year%4==0 && year%100!=0)
        printf("%d the leap year",year);
    else
        printf("not leap year");
}
