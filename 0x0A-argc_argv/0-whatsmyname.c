#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name.
 * @argc: number of arguments,
 * @argv: argguments passed during the program call.
 * Return: Alwaays 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
