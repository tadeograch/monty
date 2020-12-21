#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * print_dlistint - prints all the elements of a size_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes.
 */
unsigned int print_dlistint(const stack_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

/**
 * _strlen - len of a string
 * @s: int
 * Return: the len
 */
unsigned int _strlen(char *s)
{
	unsigned int n, len;

	n = len = 0;
	while (*(s + n) != '\0')
	{
		n++;
		len++;
	}
	return (len);
}

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes.
 */
unsigned int dlistint_len(const stack_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

/**
 * free_dlistint - frees the list.
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(stack_t *head)
{
	stack_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}