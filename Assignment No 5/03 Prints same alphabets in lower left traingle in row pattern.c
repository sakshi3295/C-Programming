#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, j = 1, rc = 0;
    char ch = 'A';

    printf("\n Enter Number For Printing : ");
    scanf("%d",&rc);

    for(i = 1; i <= rc; i++)
    {
        for(j = 1,ch = 'A'; j <= i ;j++, ch++)
        {
            if(i % 2 == 0)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf(" %c ",ch);
            }

        }
        printf("\n");
        ch++;
    }

getch();
return 0;
}
