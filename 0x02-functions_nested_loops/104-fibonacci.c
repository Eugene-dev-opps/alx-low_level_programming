#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned int fib1 = 1, fib2 = 2, fib_sum;

printf("%u, %u, ", fib1, fib2);

for (i = 3; i <= 98; i++)
{
fib_sum = fib1 + fib2;
printf("%u", fib_sum);

if (i < 98)
printf(", ");

fib1 = fib2;
fib2 = fib_sum;
}

printf("\n");

return (0);
}
