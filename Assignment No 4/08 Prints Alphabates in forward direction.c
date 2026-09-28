#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;
    char ch = 'A';

    printf("\n Enter the Count For printing =>");
    scanf("%d",&X);

    for(i = 1; i <= X; i++)
    {
        for(j = 1; j <= X; j++)
        {
            if(ch > 'Z')
            {
                ch = 'A';
            }
                printf(" %c ",ch);
                ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
