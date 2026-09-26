#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, MinNo = 0, MaxNo = 0;

    printf("\n Enter 5 numbers => \n");

    while(i < 5)
    {
    printf("\n Enter the number %d :  ", i+1);
    scanf("%d",&No);

        if((i == 0) || (No > MaxNo))
        {
            MaxNo = No;
        }

        if((i == 0)|| (No < MinNo))
        {
            MinNo = No;
        }
        i++;
    }

    printf("\n The Maximum Number between 5 numbers is : %d" ,MaxNo);
    printf("\n The Minimum Number between 5 numbers is : %d" ,MinNo);

    getch();
    return 0;
}
