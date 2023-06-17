#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
