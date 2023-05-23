#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include "header.h"
/**
 * comd_exec-executes the commands
 * @args:the arguments
 * Return:0 on success
 */
void comd_exec(char **args)
{
pid_t pid = fork();/* created the chuld process */
if (pid < 0)
{
perror("fork");
exit(1);
}
else if (pid == 0)
{
char *envp[] = {NULL};/* the child process */
if (execve(args[0], args, envp) == -1)
{
perror(args[0]);
exit(1);
}
}
else
{
wait(NULL);/* the parent process waiting for child to die */
}
}
