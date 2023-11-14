#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand(void)
{
	static int num[] = {8, 8, 7, 9, 23, 74};
	static int i = 0;

	i = i > 5 ? 0 : i;

	return (num[i++]);
}
