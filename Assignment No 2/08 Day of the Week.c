#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Day Number = ");
    scanf("%d",&No);

    if(No == 1)
    {
        printf("\n The Day of the Week is : Monday");
    }
    else if(No == 2)
    {
        printf("\n The Day of the Week is : Tuesday");
    }
    else if(No == 3)
    {
        printf("\n The Day of the Week is : Wednesday");
    }
    else if(No == 4)
    {
        printf("\n The Day of the Week is : Thursday");
    }
    else if(No == 5)
    {
        printf("\n The Day of the Week is : Friday");
    }
    else if(No == 6)
    {
        printf("\n The Day of the Week is : Saturday");
    }
    else if(No == 7)
    {
        printf("\n The Day of the Week is : Sunday");
    }
    else
    {
        printf("\n Invalid Day Number");
    }
    getch();
    return 0;
}
