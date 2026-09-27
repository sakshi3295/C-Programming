#include <stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0 , fact = 1;

    printf("Enter a number: ");
    scanf("%d", &No);

    for(i = 1; i <= No; i++)
    {
        fact = fact * i;
    }

    printf("\n Factorial of %d is = %d", No, fact);
    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
