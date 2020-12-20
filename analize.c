#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void analize(stack_t **stack)
{
	int code_i, code_j;
        int type_i = 0, type_j = 0;
        unsigned int cmp;
	instruction_t type[] = {
                {"push", push_func},
                {"pall", pall_func},
		/*{"pint", pint_func},
                {"pop", pop_func},
                {"swap", swap_func},
                {"add", add_func},
                {"nop", nop_func},*/
                {NULL, NULL}
	};

	for (code_i = 0; code[code_i] != NULL && type[type_i].opcode != NULL; code_i++)
	{
		for(code_j = 0; code[code_i][code_j] != '\0'; code_j++)
		{
			if (code[code_i][code_j] == ' ')
				continue;
		}
		for (cmp = 0; code[code_i][code_j] == type[type_i].opcode[type_j]; cmp++)
		{
			code_j++;
			type_j++;
		}
		if (cmp == strlen(type[type_i].opcode - 1))
		{
			printf("Llegue \n");
			type[type_i].f(stack, code_i);
		}
		type_i++;
		type_j = 0;
	}
}
