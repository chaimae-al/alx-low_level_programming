#include<stdio.h>

/**
 *main - lowercase alpha in reverse
 *Return :Always 0 (Success)
 */

int main(void)
{
	char al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');

	return (0);
}
