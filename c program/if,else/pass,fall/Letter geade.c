#include<stdio.h>
int main()
{
    int n;
    printf("Enter the mark :");
    scanf("%d",&n);
    if (n<0 || n>100)
        printf("invalid mark");
    else if(n>=80 || n<=100)
        printf("letter grade : A+");
    else if(n>=70 || n<=79)
        printf("letter grade : A");
    else if(n>=60 || n<=69)
        printf("letter grade : A-");
    else if(n>=50 || n<=59)
        printf("letter grade : B");
    else if(n>=40 || n<=49)
        printf("letter grade : C");
    else if(n>=33 || n<=39)
        printf("letter grade : D");
    else
        printf("fall");
}
