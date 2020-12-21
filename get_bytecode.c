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
char **get_bytecode(char *filename)
{
	int count;
	int fd;
	char *buffer;
	char **splited_code; /* variable for the splited buffer*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	count = file_char_count(filename);
	buffer = malloc(sizeof(char) * count);
	if (buffer == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	read(fd, buffer, count);
	close(fd);
	splited_code = split_buffer(buffer, count);
	return (splited_code);
}
