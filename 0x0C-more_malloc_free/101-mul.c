#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * len - finds length of string and checks if any argument is zero or NAN
  * @str: input string
  *
  * Return: string length
  */
int len(char *str)
{
	int i = 0;

	if (*str == 48)
	{
		while (*str == 48)
			str++;
		if (*str == '\0')
		{
			printf("0\n");
			exit(0);
		}
	}

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
			i++;
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (i);
}

/**
  * add - adds two number strings
  * @str1: string 1
  * @str2: string 2
  * @len: length of strings
  *
  * Return: string product of numstr and num
  */

char *add(char *str1, char *str2, int len)
{
	int carry = 0, i = 0, temp = 0;

	len--;
	for (i = 0; i <= len; i++)
	{
		temp = (str1[len - i] - 48) + (str2[len - i] - 48) + carry;
		str1[len - i] = (temp % 10) + 48;
		carry = (temp / 10);
	}
	if (carry)
		str1[len - i] = carry + 48;
	return (str1);
}

/**
  * memalloc - Allocates memory spaces for pointer variable
  * @memspace: bytes of memory to allocate
  *
  * Return: pointer to the allocated spaces
  */

char *memalloc(int memspace)
{
	char *result;

	result = malloc(sizeof(char) * memspace);
	if (result == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}
	return (result);
}

/**
  * initialize_zero - sets all the elements of an array to zero
  * @array: given array
  * @len: lenth of array
  *
  * Return: pointer to initialized array
  */

char *initialize_zero(char *array, int len)
{
	int i = 0;

	while (i < len)
	{
		*(array + i) = 48;
		i++;
	}
	return (array);
}


/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument arrays
  *
  * Return: 0 on success 98 on failure
  */

int main(int argc, char *argv[])
{
	char *result, *add1, *arg1, *arg2;
	int i = 0, j = 0, len1, len2, memspace, carry = 0, temp = 0, k = 0;

	if (argc != 3 || (*argv[1] == 45) || (*argv[2] == 45))
		printf("Error\n"), exit(98);
	arg1 = argv[1], arg2 = argv[2];
	len1 = len(arg1), len2 = len(arg2), memspace = len1 + len2 + 1;
	while (*arg1 == 48)
		arg1++;
	while (*arg2 == 48)
		arg2++;
	result = memalloc(memspace); /* alloc space for result */
	add1 = memalloc(memspace); /*alloc space addition */
	result = initialize_zero(result, memspace);
	for (j = 0; j < len2; j++) /* start multiplication */
	{ /*multiply all elements in argv[1] with argv[2][j] */
		i = 0, carry = 0;
		add1 = initialize_zero(add1, memspace);
		for (i = 0; i < len1; i++)
		{
			temp = ((arg1[len1 - 1 - i]) - 48) *
				((arg2[len2 - 1 - j] - 48)) + carry;
			/*always shift to left j times */
			add1[memspace - 1 - i - j] = (temp % 10) + 48;
			carry = temp / 10;
		} /*add carry to next digit by the left */
		add1[memspace - 1 - i - j] = carry + 48;
		result = add(result, add1, memspace);
	} /* remove leading zero if any from result */
	while (result[0] == 48)
	{
		k = 0;
		while (k < (memspace - 1))
			result[k] = result[k + 1], k++;
		result[k] = '\0', memspace--;
	}
	printf("%s\n", result);
	free(add1);
	free(result);
	return (0);
}
