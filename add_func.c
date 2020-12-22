#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * swap_func -  removes the top element of the stack.
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void add_func(stack_t **stack, unsigned int line_number)
{
    stack_t *aux;

    if (dlistint_len(*stack) < 2)
    {
        printf("L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    aux = (*stack)->next;
    aux->n = aux->n + (*stack)->n;
    pop_func(stack, line_number);
}