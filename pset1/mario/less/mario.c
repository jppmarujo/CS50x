// Prints a tower made of spaces and hashes, taken into account the user given height.
// João Marujo
// pset1
// July 2018

#include <stdio.h> // necessary for the printf function.
#include <cs50.h> // necessary for the get_int function.

int main(void)
{
// declare the variable before assigning a value. On comments, assume height is 5 for better understanding.
int height;

do
{
    // ask for the user input, regardless of the value. Assume it is 5.
    height = get_int("Select a height for your tower: ");
}
// keep asking for input, if height is: 1. negative; 2. greater than 23; 3. something other than an integer.
while (height < 0 || height > 23);

// print 5 rows, while the number of rows (that start as 0), is lower than the height.
for (int rows = 0; rows < height; rows++)
{
    // spaces start at 0. While spaces are lesser than 5 - 4 - 1 (on finish, 0 can't be lesser than 0), add another space.
    for (int spaces = 0; spaces < height - rows - 1; spaces++)
    {
        // actually print the space.
        printf(" ");
    }
    // hashes start at 0. While they are less than 4 + 2 (since rows start at 0, so not 5 + 2), add another hash.
    for (int hashes = 0; hashes < rows + 2; hashes++)
    {
        // actually print the hash.
        printf("#");
    }
// each row is, naturally (since it's a row) printed on a new line.
printf("\n");
}


}
