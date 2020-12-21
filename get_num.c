#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
* get_num - gets numbers from a string
* @code: the string
* Return: a new string with the number
*/
char *get_num(char *code)
{
	char *tmp = malloc(sizeof(char) * 6);
	int i, j = 0;

	if (tmp == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	for (i = 0; (code[i] < '0' || code[i] > '9') && code[i] != '\0'; i++)
	{
	}
	if (code[i] == '\0')
	{
		return (NULL);
	}
	while (code[i] >= '0' && code[i] <= '9')
	{
		tmp[j] = code[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
