#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0, No = 1;

    printf("\n Enter the Count For printing =>");
    scanf("%d",&X);

    for(i = 1; i <= X; i++)
    {
        for(j = 1; j <= X; j++)
        {
            printf("%3d",No);
            No++;
        }
        printf("\n");
    }
    getch();
    return 0;
}N
