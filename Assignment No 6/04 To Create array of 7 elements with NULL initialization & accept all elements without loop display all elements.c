#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum[7] = {};

    printf("\n The value of 1st Element => %d", iNum[0]);
    printf("\n The value of 2nd Element => %d", iNum[1]);
    printf("\n The value of 3rd Element => %d", iNum[2]);
    printf("\n The value of 4th Element => %d", iNum[3]);
    printf("\n The value of 5th Element => %d", iNum[4]);
    printf("\n The value of 6th Element => %d", iNum[5]);
    printf("\n The value of 7th Element => %d\n", iNum[6]);

    printf("\n\n press Any Key for Accepting Values \n");
    getch();

    printf("\n Enter Value for 1st Element : ");
    scanf("%d",&iNum[0]);

    printf("\n Enter Value for 2nd Element : ");
    scanf("%d",&iNum[1]);

    printf("\n Enter Value for 3rd Element : ");
    scanf("%d",&iNum[2]);

    printf("\n Enter Value for 4th Element : ");
    scanf("%d",&iNum[3]);

    printf("\n Enter Value for 5th Element : ");
    scanf("%d",&iNum[4]);

    printf("\n Enter Value for 6th Element : ");
    scanf("%d",&iNum[5]);

    printf("\n Enter Value for 7th Element : ");
    scanf("%d",&iNum[6]);

    printf("\n\n press Any Key To Display All Values \n");
    getch();

    printf("\n The value of 1st Element => %d", iNum[0]);
    printf("\n The value of 2nd Element => %d", iNum[1]);
    printf("\n The value of 3rd Element => %d", iNum[2]);
    printf("\n The value of 4th Element => %d", iNum[3]);
    printf("\n The value of 5th Element => %d", iNum[4]);
    printf("\n The value of 6th Element => %d", iNum[5]);
    printf("\n The value of 7th Element => %d\n", iNum[6]);



    getch();
    return 0;

}


