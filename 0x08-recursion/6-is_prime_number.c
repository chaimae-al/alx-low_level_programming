#include "main.h"

int prime_cal(int n, int i);

/**
 * is_prime_number - check whether an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_cal(n, n - 1));
}

/**
 * prime_cal- calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int prime_cal(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_cal(n, i - 1));
}
