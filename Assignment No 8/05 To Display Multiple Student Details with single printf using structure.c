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
    struct Stud Student1 = {67, "Sakshi Nalawade",95.5, 'A' };
    struct Stud Student2 = {21, "Riya Yadav", 97.90, 'B'};
    struct Stud Student3 = {87, "Harshada Nalawade",96.5, 'A' };

    printf("\n Roll Number of Students = %d, %d, %d", Student1.RollNo, Student2.RollNo, Student3.RollNo);
    printf("\n");
    printf("\n Names of Students = %s, %s, %s", Student1.Name, Student2.Name, Student3.Name);
    printf("\n");
    printf("\n Percentage of Students = %0.2f, %0.2f, %0.2f", Student1.Per, Student2.Per, Student3.Per);
    printf("\n");
    printf("\n Grade of Students = %c, %c, %c", Student1.Grade, Student2.Grade, Student3.Grade);


    getch();
    return 0;
}
