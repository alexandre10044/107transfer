/*
** EPITECH PROJECT, 2018
** engine.c
** File description:
**
*/

#include "transfer.h"

void process(struct request *req)
{
	double value = 0;
	double res = 1;

	for (value = 0; value < 1.001; value += 0.001)
	{
		for (int i = 0; i < req->ac; i += 2)
			res *= process_horner(req->content[i], value) /
				 process_horner(req->content[i + 1], value);
		printf("%g -> %.5f\n", value, res);
		res = 1;
	}
}

double process_horner(char *str, double x)
{
	int len = strlen(str) - 1;
	double value = 0;

	while (len >= 0) {
		for (; len >= 0 && str[len] != '*'; len--);
		len++;
		value *= x;
		value += (float)(str[len] - 48);
		len -= 2;
	}
	return (value);
}