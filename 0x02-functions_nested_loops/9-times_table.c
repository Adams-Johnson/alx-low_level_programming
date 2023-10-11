#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, f;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			f = j * i;
			if (j == 0)
			{
				_putchar(f + '0');
			}

			if (f < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(f + '0');
			} else if (f >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((f / 10) + '0');
				_putchar((f % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
