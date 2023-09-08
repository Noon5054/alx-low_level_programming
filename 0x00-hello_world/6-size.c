#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu 4 bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long in: %lu 8 bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu 4 bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
