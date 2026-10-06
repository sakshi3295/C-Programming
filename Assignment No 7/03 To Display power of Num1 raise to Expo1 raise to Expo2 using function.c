#include<stdio.h>
#include<conio.h>

typedef long long int lli;

lli power(int, int);

int main()
{
    int base = 0, Exp1 = 0, Exp2 = 0;

    printf("\n Enter the base :");
    scanf("%d",&base);
    printf("\n Enter the Exponent 1 :");
    scanf("%d",&Exp1);
    printf("\n Enter the Exponent 2 :");
    scanf("%d",&Exp2);

    if(Exp1 < 0 || Exp2 < 0)
    {
        printf("INVALID INPUT");
        return -1;
    }

    printf("\n ((%d) ^ %d) ^ %d = %11d.",base, Exp1, Exp2, power( power(base,Exp1),Exp2 ));

    getch();
    return 0;
}

lli power(int N1,  int N2)
{
    int i = 0;
    lli p = 0;

    if(N1 == 0 || N1 == 1)
    {
        p = 1;
    }
    else
    {
        for(i = 0, p = 1; i < N2; i++)
        {
            p = p * N1;
        }
    }

    return p;
}
