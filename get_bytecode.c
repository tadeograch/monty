#include "monty.h"

char **get_bytecode(char *filename)
{
	int count = 0;
	int fd;
	char *buffer;
	char **code; /* variable for the splited buffer*/
	size_t count_r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	for (c = getc(fp); c != EOF; c = getc(fp)) /*Count the number of characters in the textfile*/
	{
		count = count + 1;
	}
	buffer = malloc(sizeof(char) * count);
	if (buffer == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	count_r = read(fd, buffer, count);
	close(fd);
	code = split_buffer(buffer, count);
	return (code);
}
