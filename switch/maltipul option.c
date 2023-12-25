#include<stdio.h>
int main()
{
    int a,b,i,d,c;
    printf("01 add number|\n");
    printf("02 maltipul\n");
    printf("03 odd number\n");
    printf("04 even number\n");

    printf("Enter the number :");
    scanf("%d",&d);
    switch(d)
    {
    case 01:
        printf("how many add :");
        scanf("%d",&a);
        for(i=0; i<a; i++)
        {
            printf("enter the two number :\n");
            scanf("%d",&c);
            printf("+");
            scanf("%d",&b);
            d=c+b;
            printf("the two number add :%d\n",d);
        }
        break;
    case 02:
        printf("the maltipul number :");
        break;
    }
}
