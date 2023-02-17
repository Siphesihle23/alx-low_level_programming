#include <stdio.h>
/**
 * main - a program that print the size of various types on computer
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(unsigned char));
	printf("Size of int: %lu byte(s)\n", sizeof(unsigned int));
	printf("Size of long int: %lu byte(s)\n", sizeof(unsigned long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(unsigned double long int));
	printf("Size of float:%lu byte(s)\n", sizeof(unsigned float));
	return (0);
}
