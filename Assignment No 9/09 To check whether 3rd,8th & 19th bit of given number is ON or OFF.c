#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the Number =>  ");
    scanf("%d",&num);

    if((((num >> 2) & 1) == 1) && (((num >> 7) & 1) == 1) && (((num >> 18) & 1) == 1))
    {
        printf("\n 3rd , 8th and 19th bit of given numbers is ON \n");
    }

    else if((((num >> 2) & 1) == 1) && (((num >> 7) & 1) == 1))
    {
        printf("\n Only 3rd & 8th bit is ON \n");
    }

    else if((((num >> 7) & 1) == 1) && (((num >> 18) & 1) == 1))
    {
        printf("\n Only  8th & 19th bit is ON \n");
    }

    else if((((num >> 2)& 1) == 1) && (((num >> 18) & 1) == 1))
    {
        printf("\n Only 3rd & 19th bit is ON \n");
    }

    else if(((num >> 2) & 1) == 1)
    {
        printf("\n Only 3rd bit is ON \n");
    }

    else if(((num >> 7) & 1) == 1)
    {
        printf("\n Only 8th bit is ON \n");
    }

    else if(((num >> 18) & 1) == 1)
    {
        printf("\n Only 19th bit is ON \n");
    }

    else
    {
        printf("\n All bits are OFF \n");
    }

    getch();
    return 0;
}
