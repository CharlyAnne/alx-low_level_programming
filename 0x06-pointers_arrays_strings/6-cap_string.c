#include "main.h"

/**
 * cap_string - function to captitaize every first letter of a word in a string
 * separators of words are: space, tabulations, new line,  ,, ;, ., ?,
 * (, ), {, and }.
 * @s: pointer to string.
 *
 * Return: pointer to s.
*/
char *cap_string(char *s)
{
int count;

/* scan through string */
count = 0;
while (s[count] != '\0')
{
/* if next character after count is a char, capitalize it */
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
|| s[count] == ',' || s[count] == ';' || s[count] == '.'
|| s[count] == '.' || s[count] == '!' || s[count] == '?'
|| s[count] == '"' || s[count] == '(' || s[count] == ')'
|| c[count] == '{' || s[count] == '}')
{
if (s[count + 1] >= 97 && s[count + 1] <= 122)
{
s[count + 1] = s[count + 1] - 32;
}
}
count++;
}
return (s);
}
