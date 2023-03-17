#include <stdio.h>

/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++) 
	{
		for (ones = '0'; ones <= '9'; ones++) 
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) 
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
	
