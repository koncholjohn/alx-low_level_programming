#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: value less than 0 if the string is less than the other,
 * value greater than the other & 0if the are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
