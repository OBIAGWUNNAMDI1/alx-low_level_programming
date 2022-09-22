#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num1, num2;

	num1 = num2 = 0;

	while (*(dest + num1))
		num1++;
	while (num2 < n && *(src + num2))
	{
		*(dest + num1) = *(src + num2);
		num1++;
		num2++;
	}
	if (num2 < n)
		*(dest + num1) = *(src + num2);
	return (dest);
}
