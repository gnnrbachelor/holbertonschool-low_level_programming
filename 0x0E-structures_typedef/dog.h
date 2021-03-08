#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Data structure for a dog
 *
 * @name: name
 * @age: age
 * @owner: owner name
 *
 * Description: Struct for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
