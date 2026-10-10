#include<stdio.h>
#include<conio.h>

#define MaxCnt 7

void AcceptBills(int *Maxptr);
void DisplayBills(int *Maxptr);
int MaxBill(int *Maxptr);

int main()
{
    int i = 0;
    int Bills [MaxCnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills => \n ");

    DisplayBills(Bills);

    printf("\n Maximum bill from all entered bill is => %d",MaxBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Maxptr)
{
    int i = 0;

    for(i = 0; i < MaxCnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Maxptr[i]);
    }
}

void DisplayBills(int *Maxptr)
{
    int i = 0;

    for(i = 0; i < MaxCnt; i++)
    {
        printf("\n Bill %d = %d \n",i+1,Maxptr[i]);
    }
}

int MaxBill(int *Maxptr)
{
    int i = 0 , MaxBill = 0;

    for(i = 0; i < MaxCnt; i++)
    {
        if(Maxptr[i] > MaxBill)
        {
            MaxBill = Maxptr[i];
        }
    }
    return MaxBill;
}
