#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
  return write(1, &c, 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  print_most_numbers();
  return (0);
}
