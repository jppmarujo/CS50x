// are the numbers capable of making a triangle?

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool triangle(float x, float y, float z);

int main(void)
{
    float x = get_float("Give me your first length: ");
    float y = get_float("Give me your second length: ");
    float z = get_float("Give me your third length: ");

    float result = triangle(x, y, z);
    if (result == true)
    {
        printf("Truiangle.\n");
    }
    else
    {
        printf("No triangle.\n");
    }

}

bool triangle(float x, float y, float z)
{
    if (x + y < z || x <= 0 || y <= 0 || z <=0)
    {
        return false;
    }
    else
    {
        return true;

    }
}