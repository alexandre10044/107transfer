/*
** EPITECH PROJECT, 2018
** instances.c
** File description:
**
*/

#include "transfer.h"

struct request *get_request(int ac, char **as)
{
	struct request *req = malloc(sizeof(struct request));

	if (req == NULL)
		return (NULL);
	req->content = malloc(sizeof(char *) * (ac - 1));
	if (req->content == NULL)
		return (NULL);
	for (int i = 0; i < (ac - 1); i++)
		req->content[i] = strdup(as[i + 1]);
	req->ac = ac - 1;
	return (req);
}
