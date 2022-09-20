#include "main.h"
/**
 * rev_string - function that rev string
 * @s: param of func
 * Return :0
 */
void rev_string(char *s)
{
	int f, sp;
	char val;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	sp = 0;
	for (f = f - 1; sp < f; sp++)
	{
		val = s[f];
		s[f] = s[sp];
		s[sp] = val;
		f--;
	}
}

