#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
int hour_first_digit = hour / 10;
int hour_second_digit = hour % 10;
int minute_first_digit = minute / 10;
int minute_second_digit = minute % 10;

_putchar('0' + hour_first_digit);
_putchar('0' + hour_second_digit);
_putchar(':');
_putchar('0' + minute_first_digit);
_putchar('0' + minute_second_digit);
_putchar('\n');
}
}
}
