#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
extern char **environ;

int empty_line(char *line);
void print_env(void);
char *_getenv(char *env_var);
int _execute(char **args);
void *_calloc(unsigned int member, unsigned int size);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char **_split(char *str, char *separator);
char *_strcpy(char *dest, char *src);

#endif
