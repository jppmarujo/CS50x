// Prints the lowest number of coins to provide the client, taking into account the owed change.
// João Marujo
// pset1
// July 2018

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
int coinsNumber = 0, changeInCents, quarter = 25, dime = 10, nickel = 5, pennie = 1;
float change;

do
{
    change = get_float("How much change do we owe you?: "); // ask for user input regarding the change.
}

while(change < 0); // keep asking while the condition is true.

changeInCents = round(change * 100); // convert dollars to cents, since all coins are in cents. Round it, because of float imprecision!

while(changeInCents >= quarter) // always give the biggest coin (quarter), while it is possible.
{
    changeInCents = changeInCents - quarter; // take a quarter from the change.
    coinsNumber++; // add a coin to the count, in order to see how many we have to give in the end.
}

while(changeInCents >= dime) // if a quarter is not possible, run this loop.
{
    changeInCents = changeInCents - dime;
    coinsNumber++;
}

while(changeInCents >= nickel) // if a quarter, or a dime are not possible, run this loop.
{
    changeInCents = changeInCents - nickel;
    coinsNumber++;
}

while(changeInCents >= pennie) // if a quarter, or a dime, or a nickel are not possible, run this loop.
{
changeInCents = changeInCents - pennie;
coinsNumber++;
}

printf("%i\n", coinsNumber); // prints the number of least ammount of coins to give, in relation to the change.
}