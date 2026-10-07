#include<stdio.h>
#include<conio.h>

int power(int,int);

int main()
{
    int Base = 0, Expo = 0;

    REENTER:
    printf("\n Enter the 1st number(Base) : ");
    scanf("%d",&Base);
    printf("\n Enter the 2nd number(Expo) : ");
    scanf("%d",&Expo);

    if(Expo < 0)
    {
        printf("\n INVALID INPUT");
        goto REENTER;
    }

    printf("\n (%d) ^ (%d) = %d", Base, Expo, power(Base,Expo));

    getch();
    return 0;

}

int power(int num1, int num2)
{
    int i = 0, p =0;

    if(num1 == 1 || num2 == 0)
    {
        p = 1;
    }
    else
    {
        for(i = 0, p = 1; i < num2; i++)
        {
            p = p * num1;
        }
    }

    return p;
}

