#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
* file_char_count - counts the characters on the file
* @filename: name of the file
* Return: the count
*/
int file_char_count(char *filename)
{
	FILE *fptr;
	char ch;
	int charctr = 1;

	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	else
	{
		ch = fgetc(fptr);
		while (ch != EOF)
		{
			charctr++;
			ch = fgetc(fptr);
		}
	}
	fclose(fptr);
	return (charctr);
}
