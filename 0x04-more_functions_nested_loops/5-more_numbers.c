#include "main.h"
/**
 * more_numbers -a function that prints 10times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));

		}
		_putchar('\n');
	}
}
