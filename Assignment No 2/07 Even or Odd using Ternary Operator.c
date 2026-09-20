#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    (No % 2 == 0)? printf("\n %d is Even Number",No):printf("\n %d is Odd Number",No);

    getch();
    return 0;
}
