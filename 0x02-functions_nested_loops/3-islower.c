#include "main.h"
/**
 * _islower - function chek upper or lowercase
 * @c: the charecter to be checked
 * Return: 1 if c is lower case or 0 atherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
