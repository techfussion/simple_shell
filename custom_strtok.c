#include <string.h>
#include <stdbool.h>
/**
 * delim_chk-checks for delim
 * @c:character
 * @delim:delim
 * Return:true on sucess
 */
bool delim_chk(char c, const char *delim)
{
while (*delim)
{
if (c == *delim++)
{
return (true);
}
}
return (false);
}
/**
 * custom_strtok-works like the strtok function
 * @str:string
 * @delim:delim
 * @saveptr: saves pointer for the next token
 * Return:current token on sucess
 */
char *custom_strtok(char *str, const char *delim, char **saveptr)
{
char *current_token;
if (str)
{
*saveptr = str;
}
if (!*saveptr)
{
return (NULL);
}
current_token = *saveptr;
while (**saveptr)
{
if (delim_chk(**saveptr, delim))
{
*(*saveptr)++ = '\0';
while (**saveptr && delim_chk(**saveptr, delim))
{
(*saveptr)++;
}
break;
}
(*saveptr)++;
}
if (current_token == *saveptr)
{
*saveptr = NULL;
return (NULL);
}
return (current_token);
}
