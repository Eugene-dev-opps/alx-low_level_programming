#include "_putchar.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
    int i;
    char letters[] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 26; i++)
    {
        _putchar(letters[i]);
    }

    _putchar('\n');
}
