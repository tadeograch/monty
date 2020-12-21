#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"

/**
 * print_dlistint - prints all the elements of a size_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const stack_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
