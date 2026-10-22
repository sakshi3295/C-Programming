#include<stdio.h>
#include<conio.h>

int main()
{
    int NO = 0;

    printf("\n Enter the Number =>  ");
    scanf("%d",&NO);

    if((NO >> 14)& 1)
    {
        printf("\n The 15th bit of %d is ON",NO);
    }
  else
    {
        printf("\n The 15th bit of %d is OFF",NO);
    }

    getch();
    return 0;
}
