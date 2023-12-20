#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the charter :");
   scanf("%c",&ch);
   if(ch>='a' == ch<='z')
      printf("small letter");
   else if (ch>='A' ==ch<='Z')
      printf("chapital letter");   
   else
      printf("not charter");   

}      
