#include "main.h"
/**
 * cap_string - caps all words in string
 * @s: string to cap
 * Return:addr of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*s(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A'
				}
			}
		}
		i++;
	}
	return (s);
}
