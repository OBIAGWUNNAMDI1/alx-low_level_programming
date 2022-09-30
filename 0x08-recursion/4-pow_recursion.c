#include "main.h"
/**
 * _pow_recursion - rturns the value of x raised to y
 * @y:int param
 * @x:int param
 * Return: Th power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
