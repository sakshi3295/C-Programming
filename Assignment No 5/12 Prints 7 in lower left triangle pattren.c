#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0;

    printf("\n Enter the number:");
    scanf("%d",&RC);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" 7 ");
        }
        printf("\n");
    }

getch();
return 0;
}
