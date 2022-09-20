#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the elements of an array
 i* @a : param
 * @n : param
 * Return:0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
