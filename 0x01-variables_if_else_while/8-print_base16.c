#include<stdio.h>

/**
 *main - print numbers of base 16
 *Return: Always 0 (Success)
 */

int main(void)
{
	char n = '0';
	char l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
