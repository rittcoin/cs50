#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main (void)
{
    float change;
    int coins =0;

    do
    {
        change = get_float("Enter your change amount: ");

    }
    while (change < 0);
    float c = round(change * 100);
    int cents =c;
    printf("%i\n", cents);

        while(cents >= 25)
        {
            cents =  cents - 25;
            coins ++;
        }
        while(cents >= 10)
        {
            cents -= 10;
            coins ++;
        }
        while(cents >= 5)
        {
            cents -= 5;
            coins ++;
        }
        while(cents >= 1)
       {
            cents -= 1;
            coins ++;
        }

    //printf("Change is %.2f\n", change);


    printf("%i\n", coins);
}