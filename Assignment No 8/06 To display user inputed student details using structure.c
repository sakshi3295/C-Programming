#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int RollNo;
    char Name[50];
    float Per;
    char Grade;
};

int main()
{
    // Structure variables

    struct Stud Student1 = {0}, Student2 = {0},Student3 = {0}, Student4 = {0};

    // 1st Student

    printf("\n Enter 1st Student Roll Number => ");
    scanf("%d", &Student1.RollNo);

    printf("\n Enter 1st Student Name => ");
    scanf(" %49[^\n]", Student1.Name);

    printf("\n Enter 1st Student Percentage => ");
    scanf("%f", &Student1.Per);

    printf("\n Enter 1st Student Grade => ");
    scanf(" %c", &Student1.Grade);

    ///////////////////////////////////////////////////////

    // 2nd Student

    printf("\n\n Enter 2nd Student Roll Number => ");
    scanf("%d", &Student2.RollNo);

    printf("\n Enter 2nd Student Name => ");
    scanf(" %49[^\n]", Student2.Name);

    printf("\n Enter 2nd Student Percentage => ");
    scanf("%f", &Student2.Per);

    printf("\n Enter 2nd Student Grade => ");
    scanf(" %c", &Student2.Grade);

    ///////////////////////////////////////////////////////

    // 3rd Student

    printf("\n\n Enter 3rd Student Roll Number => ");
    scanf("%d", &Student3.RollNo);

    printf("\n Enter 3rd Student Name => ");
    scanf(" %49[^\n]", Student3.Name);

    printf("\n Enter 3rd Student Percentage => ");
    scanf("%f", &Student3.Per);

    printf("\n Enter 3rd Student Grade => ");
    scanf(" %c", &Student3.Grade);

    ///////////////////////////////////////////////////////

    // 4th Student

    printf("\n\n Enter 4th Student Roll Number => ");
    scanf("%d", &Student4.RollNo);

    printf("\n Enter 4th Student Name => ");
    scanf(" %49[^\n]", Student4.Name);

    printf("\n Enter 4th Student Percentage => ");
    scanf("%f", &Student4.Per);

    printf("\n Enter 4th Student Grade => ");
    scanf(" %c", &Student4.Grade);

    ///////////////////////////////////////////////////////

    // Display 1st Student Details

    printf("\n\n 1st Student Details Are As Follows => \n");

    printf("\n Roll No     = %d", Student1.RollNo);
    printf("\n Name        = %s", Student1.Name);
    printf("\n Percentage  = %.2f", Student1.Per);
    printf("\n Grade       = %c", Student1.Grade);

    ///////////////////////////////////////////////////////

    // Display 2nd Student Details

    printf("\n\n 2nd Student Details Are As Follows => \n");

    printf("\n Roll No     = %d", Student2.RollNo);
    printf("\n Name        = %s", Student2.Name);
    printf("\n Percentage  = %.2f", Student2.Per);
    printf("\n Grade       = %c", Student2.Grade);

    ///////////////////////////////////////////////////////

    // Display 3rd Student Details

    printf("\n\n 3rd Student Details Are As Follows => \n");

    printf("\n Roll No     = %d", Student3.RollNo);
    printf("\n Name        = %s", Student3.Name);
    printf("\n Percentage  = %.2f", Student3.Per);
    printf("\n Grade       = %c", Student3.Grade);

    ///////////////////////////////////////////////////////

    // Display 4th Student Details

    printf("\n\n 4th Student Details Are As Follows => \n");

    printf("\n Roll No     = %d", Student4.RollNo);
    printf("\n Name        = %s", Student4.Name);
    printf("\n Percentage  = %.2f", Student4.Per);
    printf("\n Grade       = %c", Student4.Grade);

    printf("\n\n");

    getch();
    return 0;
}
