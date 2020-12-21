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
	char **tokens = NULL;
	char *token = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * buffsize);
	if (!tokens)
	{
		free(tokens);
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
	tokens[i] = NULL;
	free(token);
	return (tokens);
}
