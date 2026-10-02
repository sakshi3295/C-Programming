#include<stdio.h>
#include<conio.h>
# define Elements 10

int main()
{
    int i = 0 , Num[Elements] = {}, OddNum = 0;

    printf("\n Enter All elements => \n");

    for(i = 0; i < Elements; i++)
    {
        printf("\n The %d element is : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] % 2 == 1)
        {
            OddNum++;
        }
    }
    printf("\n The count of Odd numbers in All elements is %d",OddNum);

    getch();
    return 0;
}
