#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size){

	if(ptr == NULL){
	
		ptr = malloc(new_size);
	}
	else{
	
		if(new_size == 0){
		
			ptr = NULL;
			free(ptr);
			return(NULL);
		}
	}
	if(new_size == old_size){
	}

	if(new_size > old_size){
	
		ptr = malloc(new_size);
	}
	return(ptr);
}
