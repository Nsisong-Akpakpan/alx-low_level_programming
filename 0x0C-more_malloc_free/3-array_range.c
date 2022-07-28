#include "main.h"
#include <stdlib.h>

/**
 * array_range -a function that creates an array of integers
 * @min: lower end of values
 * @max: upper end
 * Return: If min > max or the function fails - NULL.
 * Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
