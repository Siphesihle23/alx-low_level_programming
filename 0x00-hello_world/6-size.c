#include <stdio.h>
/**
 * main - a program that print size of various types on computer
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(unsigned char));
	printf("Size of int: %i byte(s)\n", sizeof(unsigned int));
	printf("Size of long int: %i byte(s)\n", sizeof(unsigned long int));
	printf("Size of long long int: %i byte(s)\n", sizeof(unsigned long long int));
	printf("Size of float:%i byte(s)\n", sizeof(unsigned int));
	return (0);
}
