#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h){

	int i;
	i=0;

	if (h==NULL){
		printf("la liste est vide\n");
		return(0);
	}
	else{
		while (h!=NULL){
			printf("%d\n",(*h).n);
			h=h->next;
			i++;
		}
	}
	return(i);
}
