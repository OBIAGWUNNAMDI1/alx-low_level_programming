#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers -print more numbers functions
 * Return:nothing
 */
void print_most_numbers(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		if (digits != '2' && digits != '4')
		{
			_putchar(digits);
		}
	}
	_putchar('\n');
}
