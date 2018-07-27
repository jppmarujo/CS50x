// Helper functions for music
// João Marujo
// pset2 - caesar
// July 2018

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

// function to return the number of eight notes.
int duformula(int a, int b);

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // an array of ints to hold 'X', '/' and 'Y'
    int n[3];
    // an integer to hold the numerator, or X;
    int numerator;
    // an integer to hold the denominator, or Y.
    int denominator;

    // for loop used to extract each char from the string fraction;
    for (int i = 0, size = strlen(fraction); i < size; i++)
    {
        n[i] = atoi(&fraction[i]);
    }

    // assigns the integer numerator (or 'X') to the value of n[0];
    numerator = n[0];
    // assigns the integer denominator (or 'Y') to the value of n[2];
    denominator = n[2];

    // calculus using the custom function (see last lines of code).
    return duformula(numerator, denominator);
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // assign the octave to the int char2, remembering that if it is A#3, than note is [0][1][2]. So strlen is going to be 3.
    // like so, char2 has to be strlen - 1, or 3 - 1 in that case, in order to assign it to note[2], which means A(note[0]), #(note[1]) and 3(note[2]).
    int char2 = note[strlen(note) - 1];
    // if note is a string, the octave (char2) is a char. So, in ASCII, '0' = 48; '1' = 49;
    char2 -= 48;

    // stores the distance from the forth octave to the one the user inputs.
    int distance;
    // stores the distance in 12 steps, in order to set up the octave.
    int distancein12;
    // stores the change to a different octave.
    int octaveposition;
    // holds the formula for the frequency
    double freq;
    // stores the distance from the octave up or down to the actual note (A, B, C, D, E, F or G).
    int offset;

    // in case the string only has two chars
    if (strlen(note) == 2)
    {
        // if the octave is less than 4 or bigger than 0.
        if (char2 < 4 && char2 > 0)
        {
            distance = (4 - char2);
            distancein12 = (distance * 12.0);
            octaveposition = 440.0 / pow(2.0, distancein12 / 12.0);
        }

        // if the octave is higher than 4 or lower than 9.
        else if (char2 > 4 && char2 < 9)
        {
            distance = (char2 - 4);
            distancein12 = (distance * 12.0);
            octaveposition = 440.0 * pow(2.0, distancein12 / 12.0);
        }

        // if the octave is equal to 4.
        else if (char2 == 4)
        {
            distance = (4 - char2);
            distancein12 = (distance * 12.0);
            octaveposition = 440.0 * pow(2.0, distancein12 / 12.0);
        }

        // if the octave is lower than 1 or bigger than 8.
        else
        {
            printf("The octave must be lower than 8 or bigger than 0.\n");
            return 1;
        }

        // cases for every note
        switch (note[0])
        {
            case 'A' :
                freq = octaveposition * pow(2.0, 0 / 12.0);
                break;

            case 'B' :
                offset = 2;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'C' :
                offset = -9;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'D' :
                offset = -7;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'E' :
                offset = -5;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'F' :
                offset = -4;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'G' :
                offset = -2;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            default :
                printf("Something isn't right with your note. Remember it goes like one of these: C, D, E, F, G, A, B.\n");
                return 1;
                break;
        }

        return round(freq);

    }

    if (strlen(note) == 3)
    {
        // if the octave is less than 4 or bigger than 0.
        if (char2 < 4 && char2 > 0)
        {
            distance = (4 - char2);
            distancein12 = (distance * 12.0);
            octaveposition = 440.0 / pow(2.0, distancein12 / 12.0);
        }

        // if the octave is higher than 4 or lower than 9.
        else if (char2 > 4 && char2 < 9)
        {
            distance = (char2 - 4);
            distancein12 = (distance * 12.0);
            octaveposition = 440.0 * pow(2.0, distancein12 / 12.0);
        }

        // if the octave is equal to 4.
        else if (char2 == 4)
        {
            distance = (4 - char2);
            distancein12 = (distance * 12.0);
            octaveposition = 440 * pow(2.0, distancein12 / 12.0);
        }

        // if the octave is lower than 1 or bigger than 8.
        else
        {
            printf("The octave must be lower than 8 or bigger than 0.\n");
            return 1;
        }

        // cases for every note
        switch (note[0])
        {
            case 'A' :
                freq = octaveposition * pow(2.0, 0 / 12.0);
                break;

            case 'B' :
                offset = 2;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'C' :
                offset = -9;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'D' :
                offset = -7;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'E' :
                offset = -5;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'F' :
                offset = -4;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            case 'G' :
                offset = -2;
                freq = octaveposition * pow(2.0, offset / 12.0);
                break;

            default :
                printf("Something isn't right with your note. Remember it goes like C, D, E, F, G, A, B.\n");
                return 1;
                break;
        }

        // adjusts the frequency to reflect the addition of an accidental ('b' or '#')
        if (note[1] == 'b')
        {
            freq = freq / pow(2.0, 1.0 / 12.0);
        }

        else if (note[1] == '#')
        {
            freq = freq * pow(2.0, 1.0 / 12.0);
        }

        return round(freq);

    }

    return 0;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // compares the two strings, returning 0 if they are the same.
    if (strcmp(s, "") == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}


// Custom functions

int duformula(int a, int b)
{
    if (a == 1 && b == 8)
    {
        return 1;
    }

    else
    {
        return a * 8 / b;
    }
}
