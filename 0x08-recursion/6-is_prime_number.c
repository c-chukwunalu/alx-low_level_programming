#include "main.h"

/**
  * find_prime - Checks if a given number is a prime number
  * @n: input number
  * @i: possible prime number
  *
  * Return: 1 if n is prime and 0 otherwise
  */

int find_prime(int n, int i)
{
	if (i > (n / 2))
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i + 1));
}

/**
  * is_prime_number - Checks if a given number is prime or not
  * @n: given number
  *
  * Return: 1 if n is prime or 0 otherwise
  */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	return (find_prime(n, 2));
}
