#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Row = 0, Column = 0, num = 0;

    printf("\n Enter the row count=> ");
    scanf("%d",&Row);
    printf("\n Enter the column count=> ");
    scanf("%d",&Column);
    printf("\n Enter the number for table printing=> ");
    scanf("%d",&num);

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Column; j++)
        {
            printf("%3d", num * ((i -1 )*Column+j) );

        }
        printf("\n");
    }
    getch();
    return 0;
}
