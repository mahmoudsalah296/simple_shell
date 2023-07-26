#include "main.h"

/**
 * splitstr - split the string into words
 * @str: string to be splitted
 * @delim: the delimiter
 * Return: array of words
 */
char **splitstr(char *str, char delim)
{
	int count = 0, i = 0, len = strlen(str);

	while (*str)
	{
		if (*str != delim && (*(str + 1) == delim || *(str + 1) == '\0'))
			count++;
		str++;
	}

	char **tokens = malloc(sizeof(char *) * (count + 1));

	str -= len;
	tokens[i] = strtok(str, &delim);
	i++;
	while (tokens[i - 1] != NULL)
	{
		tokens[i] = strtok(NULL, &delim);
		i++;
	}
	return (tokens);
}
