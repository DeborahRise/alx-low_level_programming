#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - a function that concatenates all the arguments of your program.
 * @ac: the number of arguments passed
 * @av: multidimensional array of arguments
 * Return: pointer to concatenated arguments
 */

char *argstostr(int ac, char **av)
{
char *ptr;
int i, j, k = 0, size = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
size = size + strlen(av[i]);
}
ptr = (char *) malloc(size *sizeof(char) + 1);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
ptr[k] = av[i][j];
k++;
}
ptr[k] = '\n';
k++;
}
ptr[k] = '\0';
return (ptr);
free(ptr);
}
