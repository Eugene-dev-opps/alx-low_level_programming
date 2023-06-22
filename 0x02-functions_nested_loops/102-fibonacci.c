#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
int fib[n];
int i;

fib[0] = 1;
fib[1] = 2;

printf("%d, %d", fib[0], fib[1]);

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
printf(", %d", fib[i]);
}

printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
print_fibonacci(50);
return (0);
}
