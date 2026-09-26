#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0 , i = 0;

    printf("\n Enter the First Number : ");
    scanf("%d",&No1);

    printf("\n Enter the Second Number : ");
    scanf("%d",&No2);

    if(No2 >= 1)
    {
        for(i = 1; i <= No2; i++)

        printf("\n %d", No1);
    }

    else
    {
    printf(" invalid input");
    }


    getch();
    return 0;
}
