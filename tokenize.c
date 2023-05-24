#include <string.h>
#include <unistd.h>
#include "header.h"
/**
* tokenize - tokenizes the commands
* @cmd:commands
* @args:arguments
* @saveptr:pointer for the nxt token
* Return:nothing
*/
void tokenize(char *cmd, char **args, char **saveptr)
{
char *token;
int i;

i = 0;
token = custom_strtok(cmd, " ", saveptr);
while (token != NULL)
{
args[i++] = token;
token = custom_strtok(NULL, " ", saveptr);
}
args[i] = NULL;
}
