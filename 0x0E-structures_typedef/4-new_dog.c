#include "dog.h"
#include <stdlib.h>

char *_copy(char *src);

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to the new created dog / NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	_name = _copy(name);
	if (_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = _name;

	(*dog).age = age;

	_owner = _copy(owner);
	if (_owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).owner = _owner;

	return (dog);
}

/**
 * _copy - copies a string
 * @src: pointer to string
 * Return: pointer to string / NULL
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

