#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

char *get_num(char *code)
{
	char *tmp = malloc(sizeof(char) * 6);
	int i, j = 0;

/*error de malloc*/
	for (i = 0; (code[i] < '0' || code[i] > '9') && code[i] != '\0'; i++)
	{
	}
	if (code[i] == '\0')
	{
		printf("no number\n");
		return (NULL);
	}
	while (code[i] >= '0' && code[i] <= '9')
	{
		tmp[j] = code[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return(tmp);
}
