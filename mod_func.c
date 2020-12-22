#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sub_func -  removes the top element of the stack.
 * @stack: the stack
 * @line_number: number of the line
 * Return: Nothing
 */
void mod_func(stack_t **stack, unsigned int line_number)
{
    stack_t *aux;

    if (dlistint_len(*stack) < 2)
    {
        printf("L%d: can't add, stack too short\n", line_number - 1);
        exit(EXIT_FAILURE);
    }
    aux = (*stack)->next;
    aux->n = (*stack)->n % aux->n;
    pop_func(stack, line_number);
}