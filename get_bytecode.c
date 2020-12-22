#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"
/**
* get_bytecode - gets the code from the file
* @filename: name of the file
* Return: a double pointer with the code
*/
int get_bytecode(char *filename)
{
	FILE *fp;
    char *line = NULL;
	unsigned int line_number = 0;
    size_t len = 0;
    ssize_t read;
	stack_t *stack = NULL;
	
	fp = fopen(filename, "r");
    if (fp == NULL)
	{
		printf("Error: Can't open file %s", filename);
    	exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fp)) != -1) 
	{
		line_number++;
		code = line;
    	analize(&stack, line_number);
	}

    free(line);
	free_dlistint(stack);
	fclose(fp);
	return (0);
}
