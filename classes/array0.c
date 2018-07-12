#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
int for_pros[100];

for (int i = 0; i < 100; i++)
{
    printf("for_pros is now %i\n", i);
    for_pros[i] = i + 1;
}
}
