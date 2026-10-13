#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RollNo;
    long long int MobileNo;
    char Name[20];
    char Grade;
    float Percentage;
};

int main()
{
    struct Stud Student1 = {};

    printf("\n Student Details are => \n ");

    printf("\n Roll No = %d ", Student1.RollNo);
    printf("\n Mobile No = %lld", Student1.MobileNo);
    printf("\n Name      = %s", Student1.Name);
    printf("\n Grade     = %c", Student1.Grade);
    printf("\n Percentage = %f", Student1.Percentage);

    getch;
    return 0;

}
