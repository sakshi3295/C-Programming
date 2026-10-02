#include<stdio.h>
#include<conio.h>
#define Elements 10

int main()
{

    int i = 0, Num[Elements] = {0}, EvenNum = 0, OddNum = 0, ZeroNum = 0;

    printf("\n Enter All elements => \n");

    for(i = 0; i < Elements; i++)
    {
        printf("\n The %d element is : ", i+1);
        scanf("%d", &Num[i]);


        if (Num[i] == 0)
        {
            ZeroNum++;
        }
        else if (Num[i] % 2 == 0)
        {
            EvenNum++;
        }
        else
        {
            OddNum++;
        }
    }

    printf("\n The count of Even numbers in All elements is %d", EvenNum);
    printf("\n The count of Odd numbers in All elements is %d", OddNum);
    printf("\n The count of Zero numbers in All elements is %d", ZeroNum);

    getch();
    return 0;
}


