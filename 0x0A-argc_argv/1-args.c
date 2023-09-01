#include <stdio.h>

/**
  * main - Prints the number of arguments passed in to it
  * @argc: argument count
  * @argv: array of argument strings
  *
  * Return: always 0 (success)
  */

int main(int argc, char **argv)
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
