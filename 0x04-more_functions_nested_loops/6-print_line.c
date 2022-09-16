#include "main.h"
/**
 * print_line -a function that draws a straight line in the terminal
 * @n:an integer value for number of times to be printed
 * Return:\n
 */
void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');


}
