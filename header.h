#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
void display_prompt(void);
void comd_exec(char **args);
int check_exit(char **args);
void remove_newline(char *cmd);
void tokenize(char *cmd, char **args, char **saveptr);
char *custom_strtok(char *str, const char *delim, char **saveptr);
int cust_atoi(const char *str);
#endif
