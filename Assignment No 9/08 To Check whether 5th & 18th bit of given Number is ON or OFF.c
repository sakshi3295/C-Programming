#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the Number =>  ");
    scanf("%d",&num);

    if(((num >> 4) & 1) == 1 && ((num >> 17) & 1) == 1)
    {
        printf("\n 5th and 18th both bit of given number is ON \n");
    }

    else if((num >> 4) & 1 == 1)
    {
        printf("\n Only 5th bit is ON \n");
    }

    else if((num >> 17) & 1 == 1)
    {
        printf("\n Only 18th bit is ON \n");
    }

    else
    {
        printf("\n Both bits are OFF \n");
    }

    getch();
    return 0;
}
