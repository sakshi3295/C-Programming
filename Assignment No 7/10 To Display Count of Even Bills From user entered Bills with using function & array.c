#include<stdio.h>
#include<conio.h>

void AcceptBills(int *Eptr);
void DisplayBills(int *Eptr);
int EvenBill(int *Eptr);

#define ECnt 7

int main()
{
    int i = 0;
    int Bills [ECnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills => \n ");

    DisplayBills(Bills);

    printf("\n Even Bill Count from all entered bill is => %d",EvenBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Eptr)
{
    int i = 0;

    for(i = 0; i < ECnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Eptr[i]);
    }
}

void DisplayBills(int *Eptr)
{
    int i = 0;

    for(i = 0; i < ECnt; i++)
    {
        printf("\n Bill %d = %d \n",i+1,Eptr[i]);
    }
}

int EvenBill(int *Eptr)
{
    int i = 0 , EvenBill = 0;

    for(i = 0; i < ECnt; i++)
    {
        if(Eptr[i] % 2 == 0)
        {
            EvenBill++;
        }
    }
    return EvenBill;
}
