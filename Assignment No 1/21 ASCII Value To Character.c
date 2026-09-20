#include<stdio.h>
#include<conio.h>

int main()
{
    int NO=0;

    printf("\n Enter a ASCII Value to get its Character : ");
    scanf("%d",&NO);

    printf("\n The ASCII Letter For Value %d is : %C",NO,NO);

    getch();
    return 0;
}
