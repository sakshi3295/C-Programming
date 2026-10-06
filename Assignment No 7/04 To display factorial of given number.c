#include<stdio.h>
#include<conio.h>

typedef long long int LLI;

LLI Calc_Fact(int);

int main()
{
    int num = 0;
    LLI res = 0;

    REENTER:
    printf("\n Enter a positive integer number to get its factorial : ");
    scanf("%d",&num);

    if(num <= 0)
    {
        printf("\n INVALID OUTPUT");
        goto REENTER;
    }

    res = Calc_Fact(num);

    printf("\n The factorial of %d is = %11d", num, res);

    getch();
    return 0;
}

LLI Calc_Fact(int no)
{
    LLI Fact = 0;

    for(Fact = 1; no > 0; no--)
    {
        Fact *= no;
    }
    return Fact;
}
