#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1, j = 1, RC = 0, no = 0;

    printf("Enter Number for Printing Table : ");
    scanf("%d",&RC);


    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%-4d",no);
            no = no + RC


;
        }
        printf("\n");
    }

getch();
return 0;
}
