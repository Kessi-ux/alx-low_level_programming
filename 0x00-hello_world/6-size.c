#include <stdio.h>
/**
 * main - A c program to print the size of various types
 * on the computer it is compiled and run on
 * Description: It displays size of char, int, long, and float
 * Return: Returns 0 as succes value
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %u byte(s)\n", sizeof(a));
	printf("Size of an int: %u byte(s)\n", sizeof(b));
	printf("Size of a long int: %u byte(s)\n", sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", sizeof(d));
	printf("Size of a float: %u byte(s)\n", sizeof(e));
	return (0);
}
