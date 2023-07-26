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
#endif
