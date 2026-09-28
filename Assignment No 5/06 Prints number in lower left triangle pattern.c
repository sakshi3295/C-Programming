#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1,  j = 1, RC = 0, no = 1;


    printf("Enter Count for Printing : ");
    scanf("%d",&RC);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%-3d",no);
            no++;
        }

        printf("\n");
    }

getch();
return 0;
}
