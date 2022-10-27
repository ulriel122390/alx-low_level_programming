#include <stdlib.h>                                                                                                   
#include <string.h>                                                                                                   
#include <stdio.h>                                                                                                    
#include "lists.h"                                                                                                    
                                                                                                                      
listint_t *add_nodeint_end(listint_t **head, const int n){
	
	if(*head == NULL){
	
		listint_t *list=(listint_t *)malloc(sizeof(listint_t *));
		if(list == NULL){
		
			return NULL;
		}
		list->n = n;
		list->next = NULL;
		*head = list;
		return *head;
	}
	return add_nodeint_end(&((*head)->next), n);
	
}
