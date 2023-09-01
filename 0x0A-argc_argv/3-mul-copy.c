#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the products of two input numbers
  * @argc: argument count
  * @argv: array of arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

/** Without the standard library functions *

int main(int argc, char *argv[])
{
	char *p;
	int a = 0, b = 0, n = 1;
	int i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < 3)
	{
		p = argv[i]; \* get 1st argument *\
		if (*p == '-') \* check if argument is -ve *\
		{
			n *= -1;
			p++; \* go to next digit in the num string *\
		}
		while (*p != '\0') \*convert argument string to int *\
		{
			a += *p - 48;
			a *= 10;
			p++;
		}
		a /= 10;
		i++;
		p = argv[i]; \* get 2nd argument *\
		if (*p == '-')
		{
			n *= -1;
			p++;
		}
		while (*p != '\0') \* convert argument str to int *\
		{
			b += *p - 48;
			b *= 10;
			p++;
		}
		b /= 10;
		i++;
	}
	printf("%d\n", a * b * n);
	return (0);
}

*/
