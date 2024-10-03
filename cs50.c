#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while(height <= 0)
    {
        height = get_int("height:");
    }
    for( int i = 0 ; i < height ; i++)
    {
        for( int j = 1; j < (height - i); j++)
        {
            printf(" ");
        }
        for( int j = 0 ; i >= j ; j++)
        {
            printf("#");
        }
        printf("  ");
        for( int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

