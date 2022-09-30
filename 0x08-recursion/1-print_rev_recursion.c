#include "main.h"
/**
 * _print_rev_recursion - Print strings in reverse
 * @s:param passsed
 * Return:0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
