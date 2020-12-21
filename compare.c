#include <string.h>
#include "monty.h"
/*1 si son iguales*/
int compare(char *str1, char *str2)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	for (; str1[i] == ' '; i++)
	{
	}
	for (count = 0; str1[i] == str2[j] && str2[j] != '\0'; count++)
	{
		i++;
		j++;
	}
	if (count == strlen(str2))
	{
		return (1);
	}
	return (0);
}