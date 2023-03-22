#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @i: input number as an integer
 * Return: absolute value
 */
int _abs(int i);
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;

	return (i);
}
