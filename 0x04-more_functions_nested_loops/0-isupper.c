#include <stdio.h>
#include "main.h"

/**
 * _isupper-function that checks for upper case
 *@c:an input integer n
 * Description:function that checks for upper case
 * Return: 1 or 0
*/

int _isupper(int c)
{
	char ch;
	int n = 0;

	for (c = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
