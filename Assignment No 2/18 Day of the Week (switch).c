#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Day Number = ");
    scanf("%d",&No);

    switch(No)
    {
    case 1:
        {
            printf("\n The Day of the Week is : Sunday");
            break;
        }
    case 2:
        {
            printf("\n The Day of the week is : Monday");
            break;
        }
    case 3:
        {
            printf("\n The Day of the week is : Tuesday");
            break;
        }
    case 4:
        {
            printf("\n The Day of the week is : Wednesday");
            break;
        }
    case 5:
        {
            printf("\n The Day of the week is : Thursday");
            break;
        }
    case 6:
        {
            printf("\n The Day of the week is : Friday");
            break;
        }
    case 7:
        {
            printf("\n The Day of the week is : Saturday");
            break;
        }
    default:
        {
            printf("\n Invalid Day Number");
        }
    }
    getch();
    return 0;
}
