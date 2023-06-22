#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
_putchar('0'); /* Print the first column (0 times row) */

for (column = 1; column <= 9; column++)
{
_putchar(',');
_putchar(' ');

product = row * column;

if (product <= 9)
_putchar(' ');

else
_putchar((product / 10) + '0');

_putchar((product % 10) + '0');
}

_putchar('\n');
}
}