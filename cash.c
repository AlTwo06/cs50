#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int coin = 0;
    int change = -1;
    while (change < 0)
    {
        change = get_int("change owed: ");
    }
    while (change >= 25)
    {
        change = change - 25;
        coin++;
    }
    while (change >= 10)
    {
        change = change - 10;
        coin++;
    }
    while (change >= 5)
    {
        change = change - 5;
        coin++;
    }
    while (change >= 1)
    {
        change = change - 1;
        coin++;
    }
    printf("%i\n",coin);


}
