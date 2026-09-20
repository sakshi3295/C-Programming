#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int RNO=0,Tot_Marks=0;
    char Grade='\0',Name[40]="\0",Course[20]="\0",City[20]="\0";
    float Per=0.0;

    printf("\n\t\t Enter Student Details => ");

    printf("\n Enter Roll Number : ");
    scanf("%d",&RNO);

    fflush(stdin);

    printf("\n Enter Student Name : ");
    gets(Name);

    fflush(stdin);

    printf("\n Enter Course : ");
    gets(Course);

    fflush(stdin);

    printf("\n Enter Address : ");
    gets(City);

    printf("\n Enter Total Marks : ");
    scanf("%d",&Tot_Marks);

    printf("\n Enter Percentage : ");
    scanf("%f",&Per);

    fflush(stdin);

    printf("\n Enter Obtained Grade : ");
    Grade=getche();

    printf("\n Press Any Key To See Details You Have Entered : ");
    getch();

    system("cls");

    printf("\n\t\t Student Information \n");

    printf("\n Roll No     : %d"
           "\n Stud Name   : %s"
           "\n Address     : %s"
           "\n Course      : %s"
           "\n Total Marks : %d"
           "\n Percentage  : %0.2f"
           "\n Grade       : '%c'"
           ,RNO,Name,City,Course,Tot_Marks,Per,Grade);

    getch();
    return 0;
}
