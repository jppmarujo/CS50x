// includes
#include <cs50.h>
#include <stdio.h>

// declare functions
int add_two_ints(int a, int b);

// calls the func
int add_two ints(int a, int b)
{
    int sum = a + b;
    return sum;
}


int main(void)
{
    // ask user for input:
    printf("Give me an integer: ");
    int x = get_int();
    printf("Give me another integer: ");
    int y = get_int();

    // add the two number together via a function call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum of %i and %i is %i!", x, y, z);
}

