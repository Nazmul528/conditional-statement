#include<stdio.h>
int main()
{
    char a;
    printf("Enter the charter :");
    scanf("%c",&a);
    if(a='a'|| a=='e'||a=='o'||a=='u'||a=='i')
    printf("the vowel");
    else if (a=='y')
    printf("the special vowel");
    else
    printf(" the consonant");
    return 0;
}    
