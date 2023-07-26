#include "main.h"

/**
 * exit_built - Exit Statue Shell
 * @cm: Parsed Command
 * @input: User Input
 * @argv:Program Name
 * @c:Excute Count
 * Return: Void (Exit Statue)
 */
void exit_built(char **cm, char *input, char **argv, int c)
{
	int statue, i = 0;

	if (cm[1] == NULL)
	{
		free(input);
		free(cm);
		exit(EXIT_SUCCESS);
	}
	while (cm[1][i])
	{
		if (_isalpha(cm[1][i++]) != 0)
		{
			_prerror(argv, c, cm);
			break;
		}
		else
		{
			statue = atoi(cm[1]);
			free(input);
			free(cm);
			exit(statue);
		}
	}
}

/**
 * change_dir - Change Dirctorie
 * @cm: Parsed Command
 * @er: Statue Last Command Excuted
 * Return: 0 Succes 1 Failed (For Old Pwd Always 0 Case No Old PWD)
 */
int change_dir(char **cm, __attribute__((unused)) int er)
{
	int value = -1;
	char cwd[2056];

	if (cm[1] == NULL)
		value = chdir(getenv("HOME"));
	else if (_strcmp(cm[1], "-") == 0)
	{
		value = chdir(getenv("OLDPWD"));
	}
	else
		value = chdir(cm[1]);

	if (value == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (value != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}
/**
 * pri_env - print Enviroment Variable
 * @cm: Parsed Command
 * @er: Statue of Last command Excuted
 * Return: Always 0
 */
int pri_env(__attribute__((unused)) char **cm, __attribute__((unused)) int er)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
