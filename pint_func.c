#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pint_func - prints the top on the stack
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void pint_func(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!*stack)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
