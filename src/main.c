/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include "transfer.h"

int main(int ac, char **as)
{
	struct request *req;

	if (ac == 2 && ((strlen(as[1]) == 1 && as[1][0] == 'h') ||
		(strlen(as[1]) == 2 && as[1][1] == 'h'))) {
		get_help();
		return (SUCCESS);
	}
	if (check(ac, as) == FALSE)
		return (FAIL);
	req = get_request(ac, as);
	if (req == NULL)
		return (FAIL);
	process(req);
	return (SUCCESS);
}

void get_help(void)
{
	const char *usage = "USAGE\n"
		"            ./107transfer [num den]*\n\n";
	const char *description = "DESCRIPTION\n"
		"            num   polynomial numerator defined by "
			"its coeficients\n"
		"            den   polynomial denominator defined by "
			"its coeficients\n";
	printf("%s%s", usage, description);
}
