#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Ask the user how much change is owed
    //Use get float
    float changeOwed;
    int count = 0;

    do
    {
        changeOwed = get_float("What is the change owed?\n");
    }
    while (changeOwed <= 0);

    //Before making change convert user inputted dollars to cents from a float to an int to avoid any tine errors
    //Round cents to the nearest penny with round

    int cents = round(changeOwed * 100);

            while (cents >= 25)
            {
                cents = cents - 25;
                count++;
            }
            while (cents >= 10)
            {
                cents = cents - 10;
                count++;
            }
            while (cents >= 5)
            {
                cents = cents - 5;
                count++;
            }
            count = count + cents;



    //Print the minimum number of coins with which that change can be made
    printf("%i\n", count);
}