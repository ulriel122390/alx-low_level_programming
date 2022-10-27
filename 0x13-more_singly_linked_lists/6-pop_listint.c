#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head){
	
	int p;
	if(*head == NULL)
		return 0;

	p = (*head)->n;
	*head = (*head)->next;
	return p;
}
