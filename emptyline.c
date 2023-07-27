#include "main.h"

/**
 * empty_line - checks if there is an empty line
 * @line: line to be checked
 * Return: 0 if there is no empty line or 1 if there is one
 */

int empty_line(char *line)
{
	int i = 0;

	while (line[i] != '\0')
	{
		if (line[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
