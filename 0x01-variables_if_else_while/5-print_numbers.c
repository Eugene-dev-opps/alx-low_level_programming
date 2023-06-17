#include <stdio.h>

/**
 * main - Entry point
 *Print all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');

	return (0);
}
