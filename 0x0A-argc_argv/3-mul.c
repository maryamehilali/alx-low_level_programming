#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers given as arguments.
 * @argc: number of arguments,
 * @argv: array of argguments passed to the program.
 * Return:multiplacation of two numbers if success,
 * 1 if there isn t two numbers.
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc > 1)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
