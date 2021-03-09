#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns string length
 *
 * @s: String
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);

}

/**
 * _strcpy - Returns string length
 *
 * @dest: Destination
 * @src: Original string
 *
 * Return: String length
 */

char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src)
		*cpy++ = *src++;

	*cpy++ = '\0';

	return (dest);
}

/**
 * new_dog - Creates dog
 *
 * @name: name
 * @age: age
 * @owner: owner name
 *
 * Return: Pointer to new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_inst;
	int len;

	dog_inst = malloc(sizeof(dog_t));

	if (dog_inst == NULL)
		return (NULL);


	len = _strlen(name);

	dog_inst->name = malloc(sizeof(char) * (len + 1));

	if (dog_inst->name == NULL)
	{
		free(dog_inst);
		return (NULL);
	}

	len = _strlen(owner);

	dog_inst->owner = malloc(sizeof(char) * (len + 1));

	if (dog_inst->owner == NULL)
	{
		free(dog_inst);
		return (NULL);
	}

	_strcpy(dog_inst->name, name);
	_strcpy(dog_inst->owner, owner);
	dog_inst->age = age;

	return (dog_inst);
}


