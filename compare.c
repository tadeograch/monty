#include "monty.h"

/**
 * compare - function to compare the code and the opcodes
 * @str1: code
 * @str2: opcode
 * Return: 1 if equals, else 0
 */
int compare(char *str1, char *str2)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	for (; str1[i] == ' '; i++)
	{
	}
	for (; str1[i] == str2[j] && str2[j] != '\0'; count++)
	{
		i++;
		j++;
	}
	if (count == _strlen(str2))
	{
		return (1);
	}
	return (0);
}
