#include<stdio.h>
int main()
{
    int num,n,i;
    printf("how many math :");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("Enter the value :");
        scanf("%d",&num);
        if (num%2==0)
            printf("%d is value even number\n\n",num);
        else
            printf("%d is value odd number\n\n",num);

    }

}
