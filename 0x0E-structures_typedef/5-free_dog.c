#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free dogs.
 * @d: type pointer struct data.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
