#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string pointer to pass to this function
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
