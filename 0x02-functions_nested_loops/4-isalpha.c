#include "main.h"
/**
 * _isalpha - shows 1 if the input is a
 * letter Another case, shows 0
 * @c: The character in ASCII code
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65  && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
