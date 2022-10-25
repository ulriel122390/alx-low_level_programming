#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h){
	
	if(h==NULL)
		return 0;
	return (1+listint_len(h->next));
}
