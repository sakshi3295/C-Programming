#include<stdio.h>
#include<conio.h>

void AcceptBills(int *Bptr);
void DisplayBills(int *Bptr);
int BillSum(int *Bptr);

int main()
{
    int i = 0, Bills[7];

    printf("\n Enter All 7 Bills => \n\n");
    printf("==============================*******==============================\n");

    AcceptBills(Bills);
    getch();

    printf("==============================*******==============================\n");
    printf("\n Display All 7 Entered Bills => \n");


    DisplayBills(Bills);
    getch();

    printf("\n ==============================*******==============================\n");
    printf("\n Sum of All Bills = %d\n",BillSum(Bills));

    getch();
    return 0;

}
void AcceptBills(int *Bptr)
{
    int i = 0;
    for(i = 0; i < 7; i++)
    {
        printf(" \n Enter Bill %d : ",i+1);
        scanf("%d",&Bptr[i]);
    }
}
void DisplayBills(int *Bptr)
{
    int i = 0;
    for(i = 0; i < 7 ; i++)
    {
        printf("\n Bill %d = %d\n",i+1,Bptr[i]);
    }
}
int BillSum(int *Bptr)
{
    int i = 0, Sum = 0;
    for(i = 0; i < 7; i++)
    {
        Sum = Sum + Bptr[i];
    }
    return Sum;
}






