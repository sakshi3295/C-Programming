#include<stdio.h>
#include<conio.h>

int main()
{
    int Base = 0, Exp = 0, Res = 0, Temp = 0;

    printf("\n Enter 1st Number(Base) : ");
    scanf("%d",&Base);
    printf("\n Enter 2nd Number(Exponent) : ");
    scanf("%d",&Exp);

    if(Base == 0 || Base == 1)
    {
        Res = Base;
    }
    else if(Exp < 0)
    {
        printf("\n Invalid Input");
        goto stop;
    }
    else
    {
        for(Res = 1, Temp = Exp ;Temp > 0; Temp--)
        {
            Res *= Base;
        }
    }

    printf("\n Power %d Raise To %d = %d. ", Base, Exp, Res);

    stop:
    getch();
    return 0;
}
