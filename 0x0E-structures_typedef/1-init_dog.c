#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - inicializa una variable
 *@d: variable
 *@name: nombre
 *@age: edad
 *@owner: dueño
 *Return: 0
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
