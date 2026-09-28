#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0;
    char ch = 'A';

    printf("\n Enter number of rows & columns: ");
    scanf("%d",&RC);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" %c ",ch);

            ch += 3;

            if(ch > 'Z')
            {
                ch = ch - 26;
            }
        }

        printf("\n");
    }
getch();
return 0;
}
