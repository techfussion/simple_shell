#include <stdlib.h>
#include <string.h>
#include "header.h"
/**
 * str_compr - compares two strings
 * @s1:string 1
 * @s2:string2
 * Return:1 if sucessful
 */
int str_compr(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (0);
s1++;
s2++;
}
return (*s1 == *s2);
}
/**
 * check_exit-checks for the exit command
 * @args:argumenst
 * Return:0 on sucess
 */
int check_exit(char **args)
{
if (str_compr(args[0], "exit") == 1)
{
int status = 0;
if (args[1])
{
status = cust_atoi(args[1]);
}
exit(status);
}
return (0);
}
