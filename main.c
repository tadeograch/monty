#include "monty.h"

int main(int argc, char **argv)
{
	char **code;
	instruction_t type[] = {
		{"push", push_func},
		{"pall", pall_func},
		{"pint", pint_func},
		{"pop", pop_func},
		{"swap", swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{NULL, NULL}
	};
	if (argc != 1)
	{
		pritf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	code = get_bytecode(argv[1]);

}
