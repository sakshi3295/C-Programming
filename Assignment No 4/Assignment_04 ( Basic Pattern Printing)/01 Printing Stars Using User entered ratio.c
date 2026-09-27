#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, j = 0, Row = 0,column = 0;

    printf("\n Enter number of rows: ");
    scanf("%d",&Row);

    printf("\n Enter number of column: ");
    scanf("%d",&column);

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= column; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    getch();
    return 0;
}

