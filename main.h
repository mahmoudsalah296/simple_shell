#ifndef _MAIN_H
#define _MAIN_H
#define BUFSIZE 1024
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
char *_memcpy(char *dest, char *src, unsigned int n);
void *fill_an_array(void *a, int el, unsigned int len);
void *_calloc(unsigned int size);
void free_all(char **cmd, char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_getenv(const char *name);
char *build(char *token, char *value);
int path_cmd(char **cmd);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strdup(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_itoa(unsigned int n);
void _prerror(char **argv, int c, char **cmd);
char **parse_cmd(char *input);
/**
 * struct bulltin - contain bultin to handle and function to excute
 * @command:pointer to char
 * @fun:fun to excute when bultin true
 */

typedef struct bulltin
{
	char *command;
	int (*fun)(char **line, int er);
} bul_t;
#endif
