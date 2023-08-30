#include "main.h"

/**
  * strlength - Get the string length
  * @s: input string
  *
  * Return: string length as an int number
  */

int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}

/**
  * check_palindrome - checks if a string is a palindrome
  * @s: Given string
  * @len: length of string 's', used as the starting point for 2nd half
  * @mid: len / 2, will be the end of 1st half of string compare
  * @start: starting point for 1st half
  *
  * Method: split the string in two and compare the two halves.
  * Return: 1 if 's' is a palindrome or 0 otherwise
  */

int check_palindrome(char *s, int len, int mid, int start)
{
	if (*(s + start) != *(s + (len - 1)))
		return (0);
	if (start == mid - 1)
		return (1);
	return (check_palindrome(s, len - 1, mid, start + 1));
}

/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: given string
  *
  * Return: 1 if s is a palindrome or 0 otherwise
  */

int is_palindrome(char *s)
{
	int len;

	len = strlength(s);
	return (check_palindrome(s, len, len / 2, 0));
}
