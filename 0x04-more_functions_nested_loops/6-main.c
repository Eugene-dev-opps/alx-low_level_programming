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
  print_line(0);
  print_line(2);
  print_line(10);
  print_line(-4);
  return (0);
}
