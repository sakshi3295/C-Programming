#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , No = 0 , MaxNo = 0;

    printf("\n Enter all 7 numbers \n ");

    for(i = 1 ; i <= 7 ; i++)
    {
        printf("\n Enter the number %d : " ,i);
        scanf("%d",&No);

        if(No > MaxNo)
        {
            MaxNo = No;
        }
    }

    printf("\n The maximum number between 7 numbers is : %d",MaxNo);

    getch();
    return 0;
}
