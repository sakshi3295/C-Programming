#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, rc = 0;

    printf("\n Enter Count for Printing : ");
    scanf("%d",&rc);

    for(i = 1; i <= rc; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" Q ");

        }
        printf("\n");
    }

getch();
return 0;
}
