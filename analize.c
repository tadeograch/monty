#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* analize - analize the code
* @stack: the stack
* Return: Nothing
*/
void analize(stack_t **stack , unsigned int line_number)
{
	int type_i;
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

	for (type_i = 0; type[type_i].opcode != NULL; type_i++)/*Recorro type*/
	{
		if (strcmp(code[0], type[type_i].opcode) == 0)
		{
			type[type_i].f(stack, line_number);
			break;
		}
	}
	if (type[type_i].opcode == NULL)
	{
		printf("L%d: unknown instruction %s\n", line_number, code[0]);
		exit(EXIT_FAILURE);
	}
}
