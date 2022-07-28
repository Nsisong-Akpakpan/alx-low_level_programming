#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for b
 * @b: whatever they give you
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
