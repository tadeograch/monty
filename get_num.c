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
	int tmp = 0;

	if (code[1] == NULL)
	{
		printf("L%d: usage: push integer\n", (line_number + 1));
		exit(EXIT_FAILURE);
	}
	
	if (check_number(code[1]) == 1)
	{
		printf("L%d: usage: push integer\n", (line_number + 1));
		exit(EXIT_FAILURE);
	}
	tmp = atoi(code[1]);
	return (tmp);
}
