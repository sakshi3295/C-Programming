#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;

    printf("\n Enter the Row And Column count =>");
    scanf("%d",&X);

    for(i = X; i >= 1; i--)
    {
        for(j = 1; j <= X; j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}

