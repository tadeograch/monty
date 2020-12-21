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
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	code = get_bytecode(argv[1]);
	analize(&stack);

	return (0);
}
