#ifndef _DOG_H_
#define _DOG_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
/**
 * struct dog - a struct function that gives detail to a dog.
 * @name: variable to pront name of dog.
 * @age: variable to print age of dog.
 * @owner: variable to print owner of dog.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*_DOG_H_*/
