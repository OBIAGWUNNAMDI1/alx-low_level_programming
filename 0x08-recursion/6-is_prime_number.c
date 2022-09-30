#include "main.h"
/**
 * check - checker for prime
 * @a: value checker
 * @b : prime checker
 * Return: -1 or value
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}
/**
 * is_prime_number - checks if numbis prime
 * @n: num to check
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
