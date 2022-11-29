/*
 * File: 10-check_cycle.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked link has a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *cat, *rat;

	if (list == NULL || list->next == NULL)
		return (0);

	cat = list->next;
	rat = list->next->next;

	while (cat && rat && rat->next)
	{
		if (cat == rat)
			return (1);

		cat = cat->next;
		rat = rat->next->next;
	}

	return (0);
}
