#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[]) //argc = argument count string argv[] is an array of strings
{                                  //argv[0] is the filename
    //first argument is the name of the program, the second is the input from user
    if (argc !=2)
    {
        return 1;
    }
    int key = atoi(argv[1]); //function in stdlib.h that converts string to int
    if (key < 0)
    {
        return 1;
    }
    else
    {
        string plainText = get_string("plaintext: "); //get plain text string from user
        printf("cyphertext: ");
        int text = strlen(plainText);
        for(int i = 0; i < text; i++) //loops through the string provided by user
        {

            if(isupper(plainText[i]))// if uppercase
            {
                printf("%c", (((plainText[i] + key) - 65) % 26) + 65);
            }
            else if islower(plainText[i])
            {
                printf("%c", (((plainText[i] + key) - 97) % 26) + 97);
            }
            else
            {
                printf("%c", plainText[i]);
            }


        }
        printf("\n");
        return 0;
    }
}