#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#define MAX_LINE 80 /*limit of command length */
/**
* main - is the main function
* Return: 0 on success
*/
int main(void)
{
char *args[MAX_LINE / 2 + 1];
int works = 1;
char *comd = NULL;
size_t comd_len = 0;
ssize_t line_read;
char *next_token = NULL;
while (works)
{
if (isatty(STDIN_FILENO))
{
display_prompt();
line_read = getline(&comd, &comd_len, stdin);/*gets user input */
}
else
{
line_read = read(STDIN_FILENO, comd, MAX_LINE);
comd[line_read] = '\0';
}
if (line_read == -1 && isatty(STDIN_FILENO))/*when there isnt comd or ctr+D */
{
works = 0;
continue;
}
else if (line_read == -1)
{
perror("getline error");
exit(1);
}
remove_newline(comd);/*remobes newline char*/
tokenize(comd, args, &next_token);/*tokenizes comd */
if (check_exit(args))
{
works = 0;
continue;
}
comd_exec(args);
}
free(comd);
return (0);
}
