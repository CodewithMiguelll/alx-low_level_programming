#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times.
 *
 * Return:always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j =97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
