#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int hash;
    int input;
    int spaces;
    printf("How tall is the half-pyramid?\n");
    do //checks input validity
    {
        input = get_int("Enter a positive number less than 24: "); //prompt for height
    }
    while(input < 0 || input > 23);
//print that many bricks
    for(int i = 0; i < input; i++)//this loop draws a row input number of times
    {
        for(spaces = 0; spaces < input - i - 1; spaces++) //loop that prints the spaces
        {
           printf("%s", " ");
        }

        for(hash = 0; hash <i + 1; hash++) //loop that prints the hashes
        {
             printf("#");
        }

    printf("  "); //two space gap

        for(int l = 0; l <i + 1; l++) //loop that prints the hashes again
            {
                printf("#");
            }
        printf("\n");
    }


}