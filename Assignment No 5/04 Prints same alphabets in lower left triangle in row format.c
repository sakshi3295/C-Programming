#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Cnt = 0;
    char ch = 'A';

    printf("\n Enter the Count For printing => ");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                printf("%2c",ch);
            }
            else
            {
                printf("%2c",ch);
            }
        }
        printf("\n");
        ch++;
    }
    getch();
    return 0;
}
