#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if ( argc > 2 && argc < 1 ) // checks if there are 2 arguments in the command line, and if the second argument is less than 0.
    {
        printf( "You must type one positive integer, and no more than one, otherwise you're to blame for segmentation fault!\n" ); // if that's true, print the message.
        return 1; // 1 is viewed as error.

    }
    if ( argv[1] < 0 )
    {
        printf( "You must type one positive integer, and no more than one, otherwise you're to blame for segmentation fault!\n" ); // if that's true, print the message.
        return 1; // 1 is viewed as error.
    }

    int k = atoi(argv[1]); // k will store the value of argv[1], but transformed into an int, to be able to do calculations, since at first it is a string ("12" is a string, not an int).
    string plaintext = get_string("plaintext: "); // ask the user to give us the plaintext.
    string ciphertext[strlen(plaintext)];

    for (char x = 0; x <= strlen(plaintext) - 1; x++)
    {

        if (isalpha(x) && islower(x))
        {
        ciphertext[x] = x;
        x = x + k % 26;
        x = x + 97;
        eprintf("This line of code should be executed.");
        printf("%c", x);
        }

        if (isalpha(x) && isupper(x))
        {
        x = x + k % 26;
        x = x + 65;
        }

        if (isalpha(x) == false)
        {
            return 0;
        }
    }

}


