#include "main.h"

/**
 * _notatty - if it is not a tty
 */
void _notatty(void)
{
	int linecount = 0;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	while (nread = getline(&line, &len, stdin) != -1)
	{
		linecount++;
		line[strlen(line) - 1] = '\0';
		if (access(line, F_OK) == 0)
		{
			char *path[] = {line, NULL};
			pid_t pid = fork();

			if (pid == 0)
				execve(line, path, NULL);
			else
				wait(NULL);
		}
		else
		{
			char **tokens = splitstr(line, " ");

			if (access(tokens[0], F_OK) == 0)
			{
				pid_t pid = fork();

				if (pid == 0)
					execve(tokens[0], tokens, NULL);
				else
					wait(NULL);
			}
		}
	}
