#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n){

	listint_t *list=(listint_t *)malloc(sizeof(listint_t *));
	(*list).n = n;
	(*list).next = *head;
	return list;
}
