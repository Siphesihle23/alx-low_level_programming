#include "main.h"
/**
 * print_sign - chek whether is sign
 * @n: ithe number to be checked
 * Return: 1 for positve num -1 for negetive or 0 for nether
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
