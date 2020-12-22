#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
* get_num - gets numbers from a string
* @code: the string
* Return: a new string with the number
*/
int get_num(unsigned int line_number)
{
	unsigned int i;
	int tmp = 0;

	printf("code1: %s\n", code[1]);
	if (code[1] == NULL)
	{
		printf("L%d: usage: push integer\n", (line_number + 1));
		exit(EXIT_FAILURE);
	}
	while ((code[1][i] >= '0' && code[1][i] <= '9') || code[1][i] == '-')
	{
		i++;
	}
	if (strlen(code[1]) != i)
	{
		printf("L%d: usage: push integer\n", (line_number + 1));
		exit(EXIT_FAILURE);
	}
	tmp = atoi(code[i]);
	return (tmp);
}
