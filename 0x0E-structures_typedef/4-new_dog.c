#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner){

	dog_t *dog1;
	dog1 = malloc(sizeof(dog_t));
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return(dog1);
}
