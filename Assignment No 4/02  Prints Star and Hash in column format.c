#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Row = 0, Column = 0;

    printf("\n Enter the row count => ");
    scanf("%d",&Row);
    printf("\n Enter the column count => ");
    scanf("%d",&Column);

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Column; j++)
        {
            if(j % 2 == 1)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

