#include "main.h"

/**
 * print_numbers - print num from 0-9
 * Return: void
 */

void print_number(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar ('\n');
}
