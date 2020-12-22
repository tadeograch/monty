#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
* main - entry point
* @argc: arguments count
* @argv: arguments value
* Return: always 0
*/
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	get_bytecode(argv[1]);
	return (0);
}
