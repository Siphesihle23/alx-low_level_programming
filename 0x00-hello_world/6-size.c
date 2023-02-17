#include <stdio.h>
/**
 * main - a program that print size of various types on computer
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(unsigned char));
	printf("Size of an int: %i byte(s)\n", sizeof(unsigned int));
	printf("Size of a long int: %i byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(unsigned long int));
	printf("Size of a float:%i byte(s)\n", sizeof(unsigned int));
	return (0);
}
