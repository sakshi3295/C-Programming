#include<stdio.h>
#include<conio.h>

int main()
{
    int Cube=0,No=0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Cube=No*No*No;

    {
        printf("\n The Cube of %d is : %d",No,Cube);
    }
    getch();
    return 0;
}
