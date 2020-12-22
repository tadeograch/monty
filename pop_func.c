#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_func -  removes the top element of the stack.
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void pop_func(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = *stack;

        if (!*stack)
        {
            printf("L%d: can't pint, stack empty", line_number - 1);
            exit(EXIT_FAILURE);
        }
        *stack = temp->next;
	    if (temp->next != NULL)
		    temp->next->prev = NULL;
        free(temp);
}