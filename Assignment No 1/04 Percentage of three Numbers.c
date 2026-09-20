#include<stdio.h>
#include<conio.h>

int main()
{
    int Sub1=0,Sub2=0,Sub3=0,Total=0;
    float Percentage=0.0;

      printf("\n Marks in Subject1 :");
      scanf("%d",&Sub1);
      printf("\n Marks in Subject2 :");
      scanf("%d",&Sub2);
      printf("\n Marks in Subject3 :");
      scanf("%d",&Sub3);

      Total=Sub1+Sub2+Sub3;

      Percentage=((float)Total/300.0)*100;
       {
           printf("\n Total Marks: %d,Percentage: %.2f",Total,Percentage);
       }
       getch();
       return 0;

}
