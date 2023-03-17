#include<stdio.h>

/**
 *main - print all the letters except q and e using only outchar twice
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
