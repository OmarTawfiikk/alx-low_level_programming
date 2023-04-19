#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attrib
 * @name: The name of the dog
 * @age: the age of dog
 * @owner: the owner
 *
 * Description: the attribute of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
