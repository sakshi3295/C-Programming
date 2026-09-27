#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Cnt = 0;
    char ch = '\0';

    printf("\n Enter the Count For printing =>");
    scanf("%d",&Cnt);

    ch = 'a';
    for(i = 1; i <= Cnt; i++)
    {
        for(j = 1; j <= Cnt; j++)
        {
            if(j % 2 == 1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" %c ",ch - 32);
            }
        }
        ch++;
        printf("\n");
    }
    getch();
    return 0;
}
