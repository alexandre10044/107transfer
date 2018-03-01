/*
** EPITECH PROJECT, 2017
** file.h
** File description:
**
*/

#ifndef transfer_
	#define transfer_

	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <string.h>

	#define SUCCESS (0)
	#define FAIL (84)
	#define TRUE (1)
	#define FALSE (0)

	struct request {
		char **content;
		int ac;
	};

	// check.c
	int check(int ac, char **as);
	int check_syntax(char *as);

	// engine.c
	void process(struct request *req);
	double process_horner(char *str, double x);

	// instances.c
	struct request *get_request(int ac, char **as);

	// main.c
	void get_help(void);

#endif /* transfer */