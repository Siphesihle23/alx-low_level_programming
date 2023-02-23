#include "main.h"
/**
 * _isalpha - function chek upper or lowercase
 * @c: the charecter to be checked
 * Return: 1 if c is lower case or 0 atherwise
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
