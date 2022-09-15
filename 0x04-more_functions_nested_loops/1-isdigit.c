#include <stdio.h>
#include "main.h"

/**
 * _isdigit-Functions that checks for a digit
 *
 * Description:Writes a function that checks for a digit.
 * @c:an integer type input
 * Return:1 or 0
*/
int _isdigit(int c)
{
	char i;
	int n = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
