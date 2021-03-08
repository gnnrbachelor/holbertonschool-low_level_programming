#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Data structure for a dog
 *
 * @name: name
 * @age: age
 * @owner: owner name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif