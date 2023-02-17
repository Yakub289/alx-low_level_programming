#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (success)
 */
int main(void)
{
	printf("size of a char; %lu byte(s)\n" sizeof(char));
	printf("size of a int; %lu byte(s)\n" sizeof(int));
	printf("size of a long int; %lu byte(s)\n" sizeof(long int));
	printf("size of a long long int; %lu byte(s)\n" sizeof(long long int));
	printf("size of float; %lu byte(s)\n" sizeof(float));
	return (0);
}
