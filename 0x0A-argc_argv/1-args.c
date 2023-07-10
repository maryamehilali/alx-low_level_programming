#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed to it.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
