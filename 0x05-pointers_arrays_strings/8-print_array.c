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
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');

}
