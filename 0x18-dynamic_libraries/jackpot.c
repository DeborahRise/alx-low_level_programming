#include <stdio.h>
#include <time.h>

int jackpot(void)
{
	static int num[] = {9, 8, 10, 24, 75, -9};
	static int i = 0;

	i = i > 5 ? 0 : i;

	return (num[i++]);
}
