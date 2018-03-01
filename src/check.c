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
	if (!(as[0] >= '0' && as[0] <= '9'))
		return (FALSE);
	for (int i = 1; as[i]; i += 2)
		if (as[i] != '*' || !(as[i + 1] >= '0' && as[i + 1] <= '9'))
			return (FALSE);
	return (TRUE);
}