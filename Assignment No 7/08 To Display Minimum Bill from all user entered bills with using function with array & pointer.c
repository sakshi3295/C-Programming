#include<stdio.h>
#include<conio.h>

#define MCnt 7

void AcceptBills(int *Mptr);
void DisplayBills(int *Mptr);
int MinBill(int *Mptr);

int main()
{
    int i = 0, Bills [MCnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills => \n ");
    DisplayBills(Bills);

    printf("\n The Minimum Bill from entered bills are => %d",MinBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Mptr)
{
    int i = 0;

    for(i = 0; i < MCnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Mptr[i]);
    }
}

void DisplayBills(int *Mptr)
{
    int i = 0;

    for(i = 0; i < MCnt; i++)
    {
        printf("\n Bill %d = %d \n ",i+1,Mptr[i]);
    }
}

int MinBill(int *Mptr)
{
    int i = 0 , MinBill = 0;

    for(i = 0; i < MCnt; i++)
	{
		if(i == 0)
		{
			MinBill = Mptr[i];
			continue;
		}
        if(Mptr[i] < MinBill)
        {
            MinBill = Mptr[i];
        }
    }
    return MinBill;
}

