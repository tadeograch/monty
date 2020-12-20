#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

void push_func(stack_t **stack, unsigned int line_number)
{
	int n;
	char *num = get_num(code[line_number]);

	if (num == NULL)
	{
		printf("L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(num);
	add_dnodeint(stack, n);
}
