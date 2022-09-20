#include "main.h"

void rev_string(char *s){
	
	int i, j, k;
	char c, *str;
	str = s;
	i = j = 0;
	c = *(s+i);
	while(c != '\0'){
	
		i++;
		c = *(s+i);
	}
	
	for(j=(i-1); j >= 0; j--){
		
		*(s+k) = *(str+j);
		k++;
	}
}
