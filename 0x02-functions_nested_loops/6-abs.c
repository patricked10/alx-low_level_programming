#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @a: input number as an integer
 * Return: absolute value
 */
int _abs(int a);
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;

	return (a);
}
