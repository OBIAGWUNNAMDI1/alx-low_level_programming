#include "main.h"
/**
 * my_recursion - my square function
 * @a : sqrt number
 * @b : number to get square
 * Return: -1 or sqr
 */
int my_recursion(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b >= a)
		return (-1);
	return (my_recursion(a, b + 1));
}
/**
 * _sqrt_recursion - Returns the natural square of a number
 * @n: integer to find sqrt of
 * Return: Natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (my_recursion(n, 1));
}
