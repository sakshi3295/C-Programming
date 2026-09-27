#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Sum = 0;

    printf(" \t Enter Zero Or Negative Number To Display the Addition of All entered Numbers \n  ");

    while(1)
    {
        printf("\n Enter the number %d => ", i + 1);
        scanf("%d", &No);

        if(No == 0)
        {
            break;
        }

        if(No < 0)
        {
            printf("\nINVALID INPUT");
            break;
        }

        Sum = Sum + No;
        i++;
    }

    printf("\nThe Sum of All Numbers is : %d", Sum);

    getch();
    return 0;
}
