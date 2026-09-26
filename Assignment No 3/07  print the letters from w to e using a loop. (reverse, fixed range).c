#include<stdio.h>
#include<conio.h>

int main()
{
    char ch1 = 'W' , ch2 = 'E';

    while(ch1 >= ch2)
    {
        printf("\n %c" ,ch1);
        ch1--;
    }

    getche();
    return 0;
}
