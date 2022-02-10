#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
 
    float dollars;
    
    do
    {
        dollars = get_float("change owed: ");
    }
    while (dollars < 0.00);

    int cents = round(dollars * 100);

    int coins = 0;
    
    if (cents >= 25)
    {
        coins += cents / 25;
     
        cents %= 25;
    }
    
    if (cents >= 10)
    {
        coins += cents / 10;
     
        cents %= 10;
    }
    
    if (cents >= 5)
    {
        coins += cents / 5;
     
        cents %= 5;
    }
    
    printf("%i\n", coins + cents);
}