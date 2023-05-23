#include <stdio.h>
#include <unistd.h>
/**
 * display_prompt-displays prompt to user.
 * Return: nothing
 */
void display_prompt(void)
{
char *prompt = "Shelly;) ";
write(STDOUT_FILENO, prompt, 9);
}
