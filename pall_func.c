#include "monty.h"

void pall_func(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!*stack)
		return;
	print_dlistint(*stack);
}
