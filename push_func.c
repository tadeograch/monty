#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * push_func - pushes an element to the stack
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void push_func(stack_t **stack, unsigned int line_number)
{
	int n;
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		free(new);
		return;
	}
	n = get_num(line_number);
	new->n = n;
	new->prev = NULL;
	if (!*stack)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
}
