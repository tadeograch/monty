#include "monty.h"

char **split_buffer(char *buffer, int buffsize)
{
	char **tokens = malloc(buffsize * sizeof(char *));
	char *token;
	int i = 0;

	if (!tokens)
	{
		pritf("Error: malloc failed");
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
