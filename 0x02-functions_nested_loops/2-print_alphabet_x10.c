#include "main.h"
/**
 * print_alphabet_x10 -> a function that prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
int j;
int X;

for (X = 0; X < 10; X++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_puutchar('\n');
}
