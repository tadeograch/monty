#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
* analize - analize the code
* @stack: the stack
* Return: Nothing
*/
void analize(stack_t **stack)
{
	int code_i;
	int type_i;
	instruction_t type[] = {
				{"push", push_func},
				{"pall", pall_func},
				{"pint", pint_func},
				{NULL, NULL}
	};
	(void)stack;
	for (code_i = 0; code[code_i] != NULL; code_i++)/*Recorro el codigo*/
	{
		for (type_i = 0; type[type_i].opcode != NULL; type_i++)/*Recorro type*/
		{
			if (compare(code[code_i], type[type_i].opcode) == 1)
			{
				type[type_i].f(stack, code_i);
				break;
			}
		}
		if (type[type_i].opcode == NULL)
		{
			printf("L%d: unknown instruction %s\n", (code_i + 1), code[code_i]);
			exit(EXIT_FAILURE);
		}
	}
	free(code);
}
