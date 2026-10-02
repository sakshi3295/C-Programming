#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, Sum = 0;

    printf("\n Enter the 10 elements =>  \n");

    for(i = 0; i < 10; i++)
    {
        REENTER:
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] < 0)
        {
            goto REENTER;
        }

        Sum = Sum + Num[i];

    }
    printf("\n The Summation of 10 elements is %d \n",Sum);

    getch();
    return 0;
}
