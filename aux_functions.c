#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * add_dnodeint - add node at the beginning
 * @head: head of the list
 * @n: n of the node
 * Return: address of the new node
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!head)
	{
		printf("Llegue ?¿\n");
		new->next = NULL;
		*head = new;
		printf(" :%d", new->n);
		printf("Llegue ?\n");
	}
	else
	{
		printf("Llegue xd\n");
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	printf("Llegue ??\n");
	return (new);
}

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
