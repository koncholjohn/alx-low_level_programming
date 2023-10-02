#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to searched
 * @accept: the set of bytes to be searched for.
 *
 * Return: if a set is matched - a pointer to be matched byte.
 * if no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for
			(k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}

		s++;
	}
	return ('\0');
}
