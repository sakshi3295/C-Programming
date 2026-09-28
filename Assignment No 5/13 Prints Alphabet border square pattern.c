#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0;

    printf("Enter number of rows & columns: ");
    scanf("%d", &RC);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if(i == 1 || i == RC || j == 1 || j == RC)
            {
                printf("%c ", 'A' + j - 1);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    getch();
    return 0;
}
