#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Description: Print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void
 */
void jack_bauer(void)
{
	int hour1 = '0';
	int hour2;
	int minute1;
	int minute2;

	while (hour1 < '3')
	{
		hour2 = '0';
		while (hour2 <= '9')
		{
			minute1 = '0';
			while (minute1 < '6')
			{
				minute2 = '0';
				while (minute2 <= '9')
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(minute1);
					_putchar(minute2++);
					_putchar('\n');
				}
				minute1++;
			}
			hour2++;
			if (hour1 == '2' && hour2 == '4')
			{
				break;
			}
		}
		hour1++;
	}
}
