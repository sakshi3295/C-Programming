#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    Res = No >> 3;

    printf("\n Result => %d >> 3 = %d \n", No,Res);


    getch();
    return 0;
}



