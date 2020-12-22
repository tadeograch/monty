#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
* split_buffer - splits a buffer, delimiter: '\n'
* @buffer: buffer to split
* @buffsize: size of the buffer
* Return: the new splited buffer
*/
void split_buffer(char *buffer)
{
	char *tokens[2];
	char *token = NULL;
	int i = 0;
	
	token = strtok(buffer, " \n\t");
	if (token == NULL)
	{
		code[0] = NULL;
		return;
	}
	while (token != NULL && i < 2)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, " \n\t");
	}
	code[0] = tokens[0];
	code[1] = tokens[1];
}
