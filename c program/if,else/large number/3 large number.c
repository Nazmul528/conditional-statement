#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num2<num1&&num1>num3)
    printf("the large number :%d",num1);
    else if(num1<num2||num2>num3)
    printf("the large number :%d",num2);
    else if(num2<num3&&num3>num1)
    printf("the large number :%d",num3);
    else
    printf("the number equal");
    
}    
