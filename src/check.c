/*
** EPITECH PROJECT, 2018
** check.c
** File description:
**
*/

#include "transfer.h"

int check(int ac, char **as)
{
	if ((ac - 1) % 2 != 0)
		return (FALSE);
	for (int i = 1; i < ac; i++)
		if (check_syntax(as[i]) == FALSE)
			return (FALSE);
	return (TRUE);
}

int check_syntax(char *as)
{
	int pos_begin = strlen(as) - 1;
	int pos_end = pos_begin;
	char *buff;

	if (pos_begin < 0)
		return (FALSE);
	while (pos_begin >= 0) {
		pos_end = pos_begin;
		for (; pos_begin >= 0 && as[pos_begin] != '*'; pos_begin--);
		pos_begin++;
		buff = strdup(as + pos_begin);
		buff[pos_end - pos_begin + 1] = 0;
		if (!(process_check_syntax(buff)))
			return (FALSE);
		pos_begin -= 2;
		if (pos_begin == -1)
			return (FALSE);
	}
	return (TRUE);
}

int process_check_syntax(char *buff)
{
	if (!(buff[0] >= '0' && buff[0] <= '9')
		&& !(buff[0] == '+') && !(buff[0] == '-'))
		return (FALSE);
	for (int i = 1; buff[i]; i++)
		if (!(buff[i] >= '0' && buff[i] <= '9'))
			return (FALSE);
	return (TRUE);
}
