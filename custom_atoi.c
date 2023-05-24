#include <stdbool.h>
/**
 * space_chk-checks for space.
 * @c:character
 * Return:true on success
 */

bool space_chk(char c)
{
return (c == ' ' || c == '\t' || c == '\n'
|| c == '\v' || c == '\f' || c == '\r');
}
/**
 * digit_chk-checks for digits
 * @c:character
 * Return:true on success
 */

bool digit_chk(char c)
{
return (c >= '0' && c <= '9');
}
/**
 * cust_atoi-works like atoi function
 * @str:string
 * Return:(result*sign)on success.
 */
int cust_atoi(const char *str)
{
int result = 0;
int sign = 1;
while (space_chk(*str))
{
str++;
}
if (*str == '-')
{
sign = -1;
str++;
}
else if (*str == '+')
{
str++;
}
while (digit_chk(*str))
{
result = result * 10 + (*str++ - '0');
}
return (result *sign);
}
