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
            printf("%2c",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
