#include "main.h"
/**
 * swap_int -function to swap integers
 * @a:declaration of a and paramters for the function swap_int
 * @b:declaration of b and parameters for the function swap_int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
