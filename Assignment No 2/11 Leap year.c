#include<stdio.h>
#include<conio.h>

int main()
{
        int No=0;

        printf("\n Enter the year = ");
        scanf("%d",&No);

        if(No % 4 == 0)
        {
            printf("\n The year %d is leap year",No);
        }
        else
        {
            printf("\n The year %d is Not leap year",No);
        }
        getch();
        return 0;
}
