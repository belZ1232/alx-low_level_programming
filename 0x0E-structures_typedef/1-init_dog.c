#include <stdlib.h>
#include "dog.h"

/**
*init_dog - to initializes a variable of type struct dog
*@d: a pointer to struct dog to initialize
*@name: a name to initialize
*@age: an age to initialize
*@owner: an owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}