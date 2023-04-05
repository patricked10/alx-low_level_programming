#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: byte
 * @accept: string
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; k++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}

