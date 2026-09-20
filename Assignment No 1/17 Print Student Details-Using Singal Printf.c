#include<stdio.h>
#include<conio.h>


int main()
{
    int RNO=107,Tot_Marks=670;
    char Grade='A', Course[8]="BCA", Name[20]="Harry Potter", City[20]="Karad";
    float Per=87.4520;

    printf("\n\t\t Student Information \n");

    printf("\n Roll NO : %d."
           "\n Student Name : %s."
           "\n Address  : %s."
           "\n Course  : %s."
           "\n Total Marks : %d."
           "\n Percentage  : %.2f."
           "\n Grade  : '%c'"
           ,RNO,Name,City,Course,Tot_Marks,Per,Grade);

   getch();
    return 0;
}
