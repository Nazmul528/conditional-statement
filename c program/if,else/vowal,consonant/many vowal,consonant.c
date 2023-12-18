#include<stdio.h>
int main()
{
    int a,n;
    printf("how many charter :");
    scanf("%d",&n);
    printf("\nEnter the charter :");
    scanf("%c",&a);
    if(a='a'|| a=='e'||a=='o'||a=='u'||a=='i')
    printf("the vowel");
    else if (a=='y')
    printf("the special vowel");
    else
    printf(" the consonant");
    return 0;
}    
