#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * funct_4 - finds the biggest number
 *
 * @user_name: username
 * @len: length of username
 * Return: the biggest number
 */
int funct_4(char *user_name, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *user_name;
	vch = 0;

	while (vch < len)
	{
		if (ch < user_name[vch])
			ch = user_name[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * funct_5 - multiplies each char of username
 *
 * @user_name: username
 * @len: length of username
 * Return: multiplied char
 */
int funct_5(char *user_name, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + user_name[vch] * user_name[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * funct_6 - generates a random char
 *
 * @user_name: username
 * Return: a random char
 */
int funct_6(char *user_name)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *user_name)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- funct_1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- funct_2 ----------- */
	ch = vch = 0;
	while (vch < len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* ----------- funct_3 ----------- */
	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- funct_4 ----------- */
	keygen[3] = ((char *)alph)[funct_4(argv[1], len)];
	/* ----------- funct_5 ----------- */
	keygen[4] = ((char *)alph)[funct_5(argv[1], len)];
	/* ----------- funct_6 ----------- */
	keygen[5] = ((char *)alph)[funct_6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
