#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long number = 612852475143;
    long factor = 2;

    while (factor * factor <= number)
    {
        if (number % factor == 0)
        {
            number /= factor;
        }
        else
        {
            factor++;
        }
    }

    printf("%ld\n", number);

    return 0;
}
