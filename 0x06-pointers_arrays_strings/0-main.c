#include "main.h"
#include <stdio.h>

/**
 * main -check the code
 *
 * Return: always 0.
 */
int main(void)
{
	char s1[98] = "Hello";
	char s2[] = "World!\n";
	char *prt;

	printf("%s \n", s1);
	printf("%s \n", s2);
	prt = _strcat(s1, s2);
	printf("%s \n", s1);
	printf("%s \n", s2);
	printf("%s \n", prt);
	return (0);
}
