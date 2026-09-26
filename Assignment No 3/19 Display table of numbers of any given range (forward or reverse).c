#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, SPT = 0, EPT = 0;

    printf("\n Enter Starting Number : ");
    scanf("%d",&SPT);

    printf("\n Enter Ending Number : ");
    scanf("%d",&EPT);

    printf("\n Tables %d To %d are => \n", SPT, EPT);

    if(SPT < EPT)
    {
        for(i = 1; i <= 10; i++)
        {
            for(j = SPT; j <= EPT; j++)
            {
                printf(" %3d ", i*j);
            }
            printf("\n");
        }
    }
    else
    {
        for(i = 1; i <= 10; i++)
        {
            for(j = SPT; j >= EPT; j--)
            {
                printf(" %3d ", i*j);
            }
            printf("\n");
        }
    }

    getch();
    return 0;
}
