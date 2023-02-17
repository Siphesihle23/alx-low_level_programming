#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - a program to positive or negetive integer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	/* your code goes there */
	if (n < 0)
		printf("is negetive\n");
	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	return (0);
}
