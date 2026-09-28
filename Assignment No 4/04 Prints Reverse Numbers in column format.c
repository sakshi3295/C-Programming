#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, R = 0, C = 0;

    printf("\n Enter the row count =>");
    scanf("%d",&R);
    printf("\n Enter the column count =>");
    scanf("%d",&C);

    for(i = 1; i <= R; i++)
    {
        for(j = C; j >= 1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}



