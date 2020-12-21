#include <stdio.h>
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