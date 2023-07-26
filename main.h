#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
extern char **environ;

char **splitstr(char *str, char delim);
void _notatty(void);
char *_strtok(char *str, const char *delim);
void exit_built(char **cm, char *input, char **argv, int c);
int change_dir(char **cm, __attribute__((unused)) int er);
int pri_env(__attribute__((unused)) char **cm, __attribute__((unused)) int er);
void _puts(char *str);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int _putchar(char c);
#endif
