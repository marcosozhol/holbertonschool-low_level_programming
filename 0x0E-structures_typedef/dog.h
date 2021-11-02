#ifndef _DOG_FILE_
#define _DOG_FILE_
/**
 *struct dog - declaracion de tipos
 *@name:nombre
 *@age: edad
 *@owner: dueño
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
