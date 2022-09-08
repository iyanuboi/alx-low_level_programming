#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
/*sizeof evaluate the size of a variable*/
	printf("size of char: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of int: %lu bytes\n",  (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes\n",  (unsigned long)sizeof(c));
	printf("size of long long int: %lu bytes\n",  (unsigned long)sizeof(d));
	printf("size of float: %lu bytes\n",  (unsigned long)sizeof(e));
	return (0);
}
