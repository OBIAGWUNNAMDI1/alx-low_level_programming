#include <stdio.h>
/**
 * main - prints the numbers in base 16
 * Return:o
 */
int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\'n);
	return (0);
}
