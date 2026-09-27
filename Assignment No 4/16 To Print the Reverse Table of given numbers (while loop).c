#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 10;

    printf("\n Enter the number to print Reverse table : ");
    scanf("%d",& No);

    while(i >= 1)
    {
        printf("\n %d * %d = %d" , No,i, No * i);
        i--;
    }

    getch();
    return 0;
}
