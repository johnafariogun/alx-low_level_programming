#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - a struct of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: struct called dog that stores a dog's name
 * ,age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
