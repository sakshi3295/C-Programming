#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, sum = 0, i = 0;

    printf("\n Enter the All 10 Numbers : \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n Enter the Number %d : " ,i + 1);
        scanf("%d" ,&num);

        if(num > 0)
        {
            sum = sum + num;
        }
    }

    printf("\n The Addition of 10 numbers is  : %d" ,sum);

    getch();
    return 0;
}
