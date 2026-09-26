#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, No = 0, MaxNo = 0;

    printf("\n Enter All 10 numbers \n ");

    while(i <= 10)
    {
        REACCEPT:
        printf("\n Enter %d number : " ,i);
        scanf("%d",&No);

        if( No <= 0)
        {
            printf("\n INVALID INPUT");
            goto REACCEPT;
        }
        i++;
        if( No > MaxNo)
        {
            MaxNo =  No;
        }
    }
    printf("\n Maximum number between 10 numbers is : %d" ,MaxNo);

    getch();
    return 0;
}
