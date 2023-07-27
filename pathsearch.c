#include "main.h"

/**
 * search_path - search file between the path
 * @cmd: the command
 * Return: command path
 */

char *search_path(char *cmd)
{
	int i = 0, path_len = 0;
	char *path = _getenv("PATH");
	char *path_copy, *path_concat = NULL;
	char **path_split;
	struct stat st;

	if (stat(cmd, &st) == 0)
		return (cmd);

	path_copy = malloc(_strlen(path) + 1);

	path_copy = _strcpy(path_copy, path);
	path_split = _split(path_copy, ":");

	while (path_split[i])
	{
		path_len = _strlen(path_split[i]);

		if (path_split[i][path_len - 1] != '/')
			path_concat = _strcat(path_split[i], "/");

		path_concat = _strcat(path_split[i], cmd);

		if (stat(path_concat, &st) == 0)
			break;

		i++;
	}

	free(path_copy);

	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}

	free(path_split);
	return (path_concat);
}
