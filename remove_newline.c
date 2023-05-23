#include <unistd.h>
#include <string.h>
/**
* remove_newline - removes new line from the command
* @cmd: the command
* Return: nothing
*/
void remove_newline(char *cmd)
{
int i;
for (i = 0; cmd[i] != '\0'; i++)
{
if (cmd[i] == '\n')
{
cmd[i] = '\0';
break;
}
}
}
