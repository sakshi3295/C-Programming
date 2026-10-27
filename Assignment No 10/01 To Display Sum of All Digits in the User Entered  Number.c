#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, Sum = 0;

    printf("\n Enter Integer Number : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0)
    {
        Dig = Temp % 10;

        Sum = Sum + Dig;

        Temp = Temp / 10;
    }

    printf("\n Sum of all Digits is : %d",Sum);

    getch();
    return 0;
}
