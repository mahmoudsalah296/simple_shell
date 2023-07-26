#include "main.h"
/**
 * check_delim - Checks If A Character Match Any Char *
 * @delim: delimiter To Check
 * @str: String To be Checked
 * Return: 1 Succes or  on failed
 */
unsigned int check_delim(char delim, const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		if (delim == str[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strtok - Token A String Into Tokens
 * @str: String to be tokenized
 * @delim: the Delimiter
 * Return: Pointer To The Token Or NULL if not found
 */
char *_strtok(char *str, const char *delim)
{
	static char *ts;
	static char *nt;
	unsigned int i = 0;

	if (str != NULL)
		nt = str;
	ts = nt;
	if (ts == NULL)
		return (NULL);
	while (ts[i] != '\0')
	{
		if (check_delim(ts[i], delim) == 0)
			break;
		i++;
	}
	if (nt[i] == '\0' || nt[i] == '#')
	{
		nt = NULL;
		return (NULL);
	}
	ts = nt + i;
	nt = ts;
	for (i = 0; nt[i] != '\0'; i++)
	{
		if (check_delim(nt[i], delim) == 1)
			break;
	}
	if (nt[i] == '\0')
		nt = NULL;
	else
	{
		nt[i] = '\0';
		nt = nt + i + 1;
		if (*nt == '\0')
			nt = NULL;
	}
	return (ts);
}
