#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Cnt = 0;
    char ch = '\0';

    printf("\n Enter the Count For printing =>");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
        if(i % 2 == 1)
        {
            ch = 'A';
        }
        else
        {
            ch = 'a';
        }
        for(j = 1; j <= Cnt; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
