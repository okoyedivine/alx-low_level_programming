#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *Return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
