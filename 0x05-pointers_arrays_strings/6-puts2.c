#include "main.h"
/**
 * puts2 - function that prints every char of a string
 * @str : string param
 * Return: 0
 */
void puts2(char *str)
{
	int c;
	char len;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			len = str[c];
			_putchar(len);
		}
		_putchar('\n');
	}

}
