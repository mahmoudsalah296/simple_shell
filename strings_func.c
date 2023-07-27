#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: value of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer
 * @src: ponter
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
/**
 * _split - split string
 * @str: string to be splitted
 * @separator: separator
 * Return: splitted string
 */

char **_split(char *str, char *separator)
{
	char *token, **split_str;
	int i = 0;

	token = strtok(str, separator);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		return (NULL);
	}

	while (token)
	{
		split_str[i] = token;
		token = strtok(NULL, separator);
		i++;
	}
	return (split_str);
}
/**
 * _strcat - concatenate two srtings
 * @dest: string 1
 * @src: string 2
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - calculate the length of a string
 * @s: string we want to calculate its length
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
