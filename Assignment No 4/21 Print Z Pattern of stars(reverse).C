#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Cnt = 0;

    printf("\n Enter the count for printing => ");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
        for(j = 1; j <= Cnt; j++)
        {
            if(i == 1 || i == Cnt || i == j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
