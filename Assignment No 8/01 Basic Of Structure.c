#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RollNo;
    char Name[10];
    float Per;
    char Grade;
};

int main()
{
    struct Stud Student1;

    printf("\n Roll no = %d", Student1.RollNo);
    printf("\n Name    = %s", Student1.Name);
    printf("\n Percentage = %f", Student1.Per);
    printf("\n Grade      = %c", Student1.Grade);

    getch();
    return 0;
}
