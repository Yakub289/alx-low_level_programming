#include "dog.h"
#include <stdio.h>

/**
* init_dog - Initialize a variable of type struct dog.
* @d: The Struct.
* @name: The name of the dog
* @age: Dog's age
* @owner: The dog owner.
* Return: Nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
