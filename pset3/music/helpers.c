// Helper functions for music

#include <cs50.h>
#include <string.h>

#include "helpers.h"

// function to return the number of eight notes.
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

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    for (int i = 0, size = strlen(fraction), int n[], int numerator, int denominator; i < size; i++)
    {
        n[i] = atoi(fraction[i]);
        n++;
    }

    numerator = n[0];
    denominator = n[2];

    return duformula(numerator, denominator);
    //if (denominator = 8)
    //{
        //return numerator;
    //}

    //else if (denominator != 8)
    //{
        //return numerator * 8 / denominator;
    //}
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s == "")
    {
        return true;
    }

    else
    {
        return false;
    }
}
