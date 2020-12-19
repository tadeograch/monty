#include "monty.h"
/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 0 on succes, else 1
 */
int _strcmp(char s1[], char s2[])
{
	int i = 0;
	int flag = 0;

	while (flag == 0)
	{
		if (s1[i] > s2[i])
		{
			flag = 1;
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;
		}
		if (s1[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (flag);
}
