#include<stdio.h>
#include<conio.h>

int main()

 {
     char ch ='\0';

     printf("\n Enter a Character To get its ASCII Value : ");
     ch = getche();

     printf("\n The ASCII Value of %C is : %d",ch,ch);

     getch();
     return 0;

 }
