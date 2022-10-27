#include <stdlib.h>                                                                                                                     
#include <string.h>                                                                                                                     
#include <stdio.h>                                                                                                                      
#include "lists.h" 

void free_listint2(listint_t **head){
	while(*head != NULL){
		
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
	free(*head);
}
