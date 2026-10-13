#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RollNo;
    char Name[20];
    float Per;
    char Grade;
};

int main()
{
    struct Stud Student1 = {47, "Sakshi Nalawade",95.5, 'A'};   // structure Instance/object/variable

    printf("\n Roll no = %d \n", Student1.RollNo);
    printf("\n Name    = %s \n", Student1.Name);
    printf("\n Percentage = %f \n", Student1.Per);
    printf("\n Grade      = %c \n", Student1.Grade);

    getch();
    return 0;
}
