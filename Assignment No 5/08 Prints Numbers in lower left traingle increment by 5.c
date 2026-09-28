#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0, num = 0;

    printf("\n Enter number of rows & columns: ");
    scanf("%d",&RC);

    printf("\n Enter starting number: ");
    scanf("%d",&num);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 5;
        }

        printf("\n");
    }
getch();
return 0;
}
