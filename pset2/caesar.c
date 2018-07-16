// Shifts an 'n' number (user defined before runtime) of letters of user inputed text (at runtime).
// usage: ./caesar n (n being a non-negative integer).
// João Marujo
// pset2 - caesar
// July 2018

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// borrowed from user 'epatel' at: https://stackoverflow.com/questions/1961209/making-some-text-in-printf-appear-in-green-and-red, to give colors to terminal output.
#define RESET   "\033[0m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */


//ASCII VALUES REFERENCE:
//int upperAlf[] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 82, 84, 85, 86, 87, 88, 89, 90 };
//int lowerAlf[] = { 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122 };


int main(int argc, string argv[])
{
    // checks if there are only 2 arguments in the command line, and if the argument is non-negative.
    if (argc != 2 || atoi(argv[1]) < 0)
    {
        printf(BOLDRED "You must type one positive integer, and no more than one, otherwise you're to blame for segmentation fault!\n"
               BOLDGREEN "Usage is: ./caesar n\n" RESET);
        return 1;
    }

    // store the value of argv[1], transformed into an int, to be able to do calculations (at first, it is a string).
    int k = atoi(argv[1]);
    string ptext = get_string("plaintext: ");

    // needed to meet the requirements. After this, it prints whatever is in the for loop.
    printf("ciphertext: ");


    // int that starts at 0; another int that equals the lenght of plaintext; while i is less than the plaintext lenght; add another to i.
    for (int i = 0, n = strlen(ptext); i < n; i++)
    {
        // check if it is a letter.
        if (isalpha(ptext[i]))
        {
            // check if it is lowercase.
            if (islower(ptext[i]))
            {
                ptext[i] = ptext[i] - 97;
                ptext[i] = (ptext[i] + k) % 26;
                ptext[i] = ptext[i] + 97;
                printf("%c", ptext[i]);
            }

            // check if it is uppercase.
            else if (isupper(ptext[i]))
            {
                ptext[i] = ptext[i] - 65;
                ptext[i] = (ptext[i] + k) % 26;
                ptext[i] = ptext[i] + 65;
                printf("%c", ptext[i]);
            }
        }

        // if it is not a letter, just print as is.
        else
        {
            printf("%c", ptext[i]);
        }
    }

    // prints a new line, and returns 0 after main is executed.
    printf("\n");
    return 0;
}