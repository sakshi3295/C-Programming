#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;
    char ch = '\0';

    printf("\n Enter the Count For printing =>");
    scanf("%d",&X);

    for(i = 1; i <= X; i++)
    {
        for(j = 1,ch = 'A'; j <= X; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
