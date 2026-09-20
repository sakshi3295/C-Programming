#include<stdio.h>
#include<conio.h>

int main()
{
   char opr = '\0';
   float num1 = 0 , num2 = 0 , ans = 0;

   printf("\n Enter the operator (+,-,*,/,%%) : ");
   opr = getche();

   if(opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%')
   {
       printf("\n INVALID OPERATOR");
       return -1;
   }
   switch(opr)
   {
        case '+':
            printf("\n Enter Number 1 : ");
            scanf("%f" ,&num1);
            printf("\n Enter Number 2 : ");
            scanf("%f" ,&num2);

                ans = num1 + num2;
            printf("\n Addition of numbers is %f + %f = %f \n", num1 , num2, ans);

            break;

        case '-':
            printf("\n Enter Number 1 : ");
            scanf("%f" ,&num1);
            printf("\n Enter Number 2 : ");
            scanf("%f" ,&num2);

                ans = num1 - num2;
            printf("\n Subtraction of numbers is %f - %f = %f \n" , num1 , num2, ans);

            break;


        case '*':
            printf("\n Enter Number 1 : ");
            scanf("%f" ,&num1);
            printf("\n Enter Number 2 : ");
            scanf("%f" ,&num2);

                ans = num1 * num2;
            printf("\n Multiplication of numbers is %f * %f = %f \n" , num1 , num2, ans);

            break;

        case '/':
            printf("\n Enter Number 1 :");
            scanf("%f" ,&num1);
            printf("\n Enter Number 2 :");
            scanf("%f" ,&num2);

                ans = num1/ num2;
            printf("\n Division of numbers is %f / %f = %f \n" , num1 , num2, ans);

            break;


        case '%':
            printf("\n Enter Number 1 : ");
            scanf("%f" ,&num1);
            printf("\n Enter Number 2 : ");
            scanf("%f" ,&num2);

            ans = (int)num1 % (int)num2;
            printf("\n Reminder of numbers is %0.2f %% %0.2f = %f \n" ,(int)num1 , (int)num2, (int)ans);

            break;
    }

    printf("\n THANKS FOR USING OUR CALCULATOR !!!");

    getch();
    return 0;
}

