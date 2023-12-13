#include<stdio.h>
int main()
{
    int num1,num2,n,i;
    printf("how many math :");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<=n; i++)
    {
        printf("Enter first value :");
        scanf("%d",&num1);
        printf("Enter second value :");
        scanf("%d",&num2);
        if (num1>num2)
        {
            printf("small number:%d\n",num2);
            printf("big number  :%d\n\n",num1);

        }
        if (num1<num2)
        {
            printf("small number:%d\n",num1);
            printf("big number  :%d\n\n",num2);
        }

        else
            printf("equal numer\n\n");

    }

}
