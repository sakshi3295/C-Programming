#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    if(No % 2 == 0)
    {
      printf("\n %d is Even Number",No);
    }

    else
    {
        printf("\n %d id Odd Number",No);
    }
    getch();
    return 0;
}
