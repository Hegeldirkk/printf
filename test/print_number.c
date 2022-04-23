#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int nb;
	if (n < 0)
	{
		nb = -n;
		_putchar('-');
	}
	else
	{
		nb = n;
	}

	if (nb /10)
	{
		print_number(nb / 10);
	}
	_putchar((nb % 10) + '0');
}
