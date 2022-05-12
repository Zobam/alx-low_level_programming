#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs structure
 * @d: pointer of dog structure
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
