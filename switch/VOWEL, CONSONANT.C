#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charter :");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("THE VOWAL");
        break;
    case 'y':
    case 'Y':
        printf("THE SPECIAL VOWAL");
        break;
    default:
        printf("THE CONSONANT");
    }
}
