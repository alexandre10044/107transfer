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

	for (value = 0; value < 1.001; value += 0.001) {
		for (int i = 0; i < req->ac; i += 2)
			res *= process_horner(req->content[i], value) /
				 process_horner(req->content[i + 1], value);
		printf("%g -> %.5f\n", value, res);
		res = 1;
	}
}

double process_horner(char *str, double x)
{
	int pos_begin = strlen(str) - 1;
	int pos_end = pos_begin;
	double value = 0;
	char *buff;

	while (pos_begin >= 0) {
		pos_end = pos_begin;
		for (; pos_begin >= 0 && str[pos_begin] != '*'; pos_begin--);
		pos_begin++;
		buff = strdup(str + pos_begin);
		buff[pos_end - pos_begin + 1] = 0;
		value *= x;
		value += atoi(buff);
		pos_begin -= 2;
	}
	return (value);
}
