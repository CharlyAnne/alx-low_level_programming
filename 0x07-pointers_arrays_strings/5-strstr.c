#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: if substring is located - a pointer to the beginning of
 * the located substring
 * if substring is not located - return NULL
*/
char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
}
while (haystack[index] == needle[index])
}
haystack++;
}
return ('\0');
}
