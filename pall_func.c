#include "monty.h"

/**
 * pall_func - prints all the values on the stack
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!*stack)
		return;
	print_dlistint(*stack);
}
