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
char **split_buffer(char *buffer, int buffsize)
{
	char **tokens = malloc(buffsize * sizeof(char *));
	char *token;
	int i = 0;

	if (tokens == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, "\n");
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, "\n");
	}
	free(token);
	tokens[i] = NULL;
	return (tokens);
}
