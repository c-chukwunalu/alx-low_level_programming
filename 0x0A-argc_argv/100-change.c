#include <stdio.h>
#include <stdlib.h>

/**
  * changes - Finds min num of coins to make a change for an amount of money
  * using 25, 10, 5, 2, and 1 as the coin values
  * @amount: the given amount
  * @change: min coins for change
  * @i: count
  *
  * Return: change found
  */

int changes(int amount, int change, int i)
{
	int coinval[] = {25, 10, 5, 2, 1};
	int temp = 0;

	if (i > 4)
		return (change);
	change = amount / coinval[i];

	if (change >= 0)
	{
		temp = amount % coinval[i];
		if (temp == 0)
			return (change);
	}

	return (change + changes(temp, 0, i + 1));
}

/**
 * main - Prints the change found
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0 - success, 1 - error
 */

int main(int argc, char *argv[])
{
	int money = 0, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money >= 0)
	{
		change = changes(money, 0, 0);
	}
	printf("%d\n", change);
	return (0);
}
