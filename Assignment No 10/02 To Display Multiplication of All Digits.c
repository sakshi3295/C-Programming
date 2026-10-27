#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0,Dig = 0, Res = 1;

    printf("\n Enter Integer Number : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0 )
    {
        Dig = Temp % 10;

        Res = Res * Dig;

        Temp = Temp / 10;
    }
    printf("\n Multiplication of All Digits is = %d",Res);

    getch();
    return 0;

}
