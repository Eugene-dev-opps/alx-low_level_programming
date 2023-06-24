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
  print_diagonal(0);
  print_diagonal(2);
  print_diagonal(10);
  print_diagonal(-4);
  return (0);
}
