#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: dog
 * Description: Free memory of the dog struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
