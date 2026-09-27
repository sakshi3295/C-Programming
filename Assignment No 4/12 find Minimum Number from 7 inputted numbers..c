#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, MinNo = 0;

    printf("\n Enter the  All 10 number \n");

    for(i= 0 ; i <10 ; i++)
    {
        REACCEPT:
        printf("\n Enter the number %d : " ,i+1);
        scanf("%d",&No);

        if(No <= 0)
        {
        printf("\n INVALID NUMBER");
        goto REACCEPT;
        }

        if((i == 0) || (No <  MinNo))
        {
             MinNo = No;
        }
    }
    printf("\n Minimum Number between 10 numbers is : %d", MinNo);

    getch();
    return 0;
}
