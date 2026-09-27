#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Cnt = 0;

    printf("\n Enter the Count For printing => ");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" * ");

        }
        printf("\n");
    }
    getch();
    return 0;


}
