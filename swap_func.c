#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * swap_func -  removes the top element of the stack.
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void swap_func(stack_t **stack, unsigned int line_number)
{
    int tmp = 0;
    stack_t *aux;

    if (dlistint_len(*stack) < 2)
    {
        printf("L%d: can't swap, stack too short\n", line_number - 1);
        exit(EXIT_FAILURE);
    }
    aux = (*stack)->next;
    tmp = aux->n;
    aux->n = (*stack)->n;
    (*stack)->n = tmp;
}