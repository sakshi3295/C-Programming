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
    // 1st Student

    struct Stud Student1 = {47, "Sakshi Nalawade",92.20, 'A' };

    printf("\n 1st Student details are => \n");

    printf("\n Roll no = %d", Student1.RollNo);
    printf("\n Name    = %s", Student1.Name);
    printf("\n Percentage = %f", Student1.Per);
    printf("\n Grade      = %c", Student1.Grade);

    printf("\n\n");

/////////////////////////////////////////////////////////////////////////////////////////

   // 2nd Student

    struct Stud Student2 = {85, "Harry Potter",73.32, 'B' };

    printf("\n 2nd Student details are => \n");

    printf("\n Roll no = %d", Student2.RollNo);
    printf("\n Name    = %s", Student2.Name);
    printf("\n Percentage = %f", Student2.Per);
    printf("\n Grade      = %c", Student2.Grade);

    printf("\n\n");

/////////////////////////////////////////////////////////////////////////////////////////

    //3rd student

    struct Stud Student3 = {12, "Harshda Nalawade",96.52, 'A' };

    printf("\n 3rd Student details are => \n");

    printf("\n Roll no = %d", Student3.RollNo);
    printf("\n Name    = %s", Student3.Name);
    printf("\n Percentage = %f", Student3.Per);
    printf("\n Grade      = %c", Student3.Grade);

    printf("\n\n");

//////////////////////////////////////////////////////////////////////////////////

    //4th student

    struct Stud Student4 = {32, "Vedika Mane",57.0,'C' };

    printf("\n 4th Student details are => \n");

    printf("\n Roll no = %d", Student4.RollNo);
    printf("\n Name    = %s", Student4.Name);
    printf("\n Percentage = %f", Student4.Per);
    printf("\n Grade      = %c", Student4.Grade);

    printf("\n\n");

////////////////////////////////////////////////////////////////////////////////

    //5th student

    struct Stud Student5 = {89, "Shraddha Devkar",98.5, 'A' };

    printf("\n 5th Student details are => \n");

    printf("\n Roll no = %d", Student5.RollNo);
    printf("\n Name    = %s", Student5.Name);
    printf("\n Percentage = %f", Student5.Per);
    printf("\n Grade      = %c", Student5.Grade);

    getch();
    return 0;
}
