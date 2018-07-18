#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int number = get_int("Insert a number to know how many steps it takes to get to 1 using the collatz conjecture: ");
    printf("%i takes %i steps to get to 1 using the collatz conjecture.\n", number, collatz(number));
}

int collatz(int n)
{
    if (n == 1) // base case
        return n = 0;
    else if (n % 2 == 0) // if the number is even
        return 1 + collatz(n / 2);
    else // if the number is odd
        return 1 + collatz(3 * n + 1);
}