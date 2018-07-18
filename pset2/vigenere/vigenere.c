// Enciphers text with a key given by the user before runtime. Each character of the key corresponds to an alphabetical index value.
// (A: 0, B: 1, C: 2 ... Z: 25) | v.g: key = abc ; plaintext = abc ; result = a(a is a 0 jump) c(b is 1 jump) e(c is 2 jumps).
// Usage: ./vigenere key
// João Marujo
// pset2
// July 2018

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if there are 2 arguments.
    if (argc != 2)
    {
        printf("Use (only) one argument after ./vigenere\n");
        return 1;
    }

    // check if each item of the second argument is alphabetical. As soon as one is not, break the loop, to reduce computing.
    for (int m = 0, n = strlen(argv[1]); m < n; m++)
    {
        if (isalpha(argv[1][m]) == false)
        {
            printf("Use only alphabetical characters on the second argument, please.\n");
            return 1;
            break;
        }
    }

    // continue the program if both pre-requisites are met.
    string key = argv[1];
    int keylen = strlen(argv[1]);
    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    // iterate throught all the text chars, and the key chars

    for (int a = 0, b = strlen(text), c = 0; a < b; a++)
    {
        // checks if the char[n] in string 'text' is alphabetical.
        if (isalpha(text[a]))
        {
            // checks if the char[n] in string 'text' is lower case.
            if (islower(text[a]))
            {
                text[a] = text[a] - 97;
                key[c] = toupper(key[c]) - 65;
                text[a] = (text[a] + key[c % keylen]) % 26;
                text[a] = text[a] + 97;
                printf("%c", text[a]);
                c++;
            }

            // checks if the char[n] in string 'text' is upper case.
            else if (isupper(text[a]))
            {
                text[a] = text[a] - 65;
                key[c] = toupper(key[c]) - 65;
                text[a] = (text[a] + key[c % keylen]) % 26;
                text[a] = text[a] + 65;
                printf("%c", text[a]);
                c++;
            }
        }

        // breaks out of the loop in order not to print the '\0' tag that represents the end of a string in an array.
        else if (text[a] == b)
        {
            break;
        }

        // in order not to encypher spaces.
        else
        {
            key[c] = key[c];
            printf("%c", text[a]);
        }
    }

    // prints a new line before main ends.
    printf("\n");
    return 0;
}


