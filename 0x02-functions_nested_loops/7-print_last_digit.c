#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

if (n == 0)
{
_putchar('0');
return (0);
}
else if (n == INT_MIN)
{
last_digit = 8;
_putchar('0' + last_digit);
return (last_digit);
}
else if (n < 0)
{
n = -n;
}

last_digit = n % 10;

_putchar('0' + last_digit);

return (last_digit);
}
