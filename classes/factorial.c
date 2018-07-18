#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int number = get_int("Insert a number to know its factorial value (!n): ");
    printf("%i\n", fact(number));
}

int fact(int n)
{
    if (n == 1)
        return 1; // base case, since fact(1) = 1;
    else
        return n * fact(n-1); // recursion case, since, v.g., fact(2) = 2 * fact(1) ; fact(3) = 3 * fact(2)....
}