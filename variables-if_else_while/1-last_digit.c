#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * @brief main -> assign a random number to the variable n each time it is executed and prints out 
 * based on a condition and print the last digit of the number stored in the variable n
 * @Return: always 0
 * 
 */

int main(void)
{
    int n;
    int last;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    last = n % 10;
    printf("Last digit of %d is %d ", n, last);

    if (last > 5)
    {
        printf("Greater than 5");
    }

    if (last == 0)
    {
        printf("0");
    }

    if (last < 0 && last != 0)
    {
        printf("Less than 6 not 0");
    }

    printf("\n");   
    
    
    return (0);
}