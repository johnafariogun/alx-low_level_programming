#ifndef DOG_H
#define DOG_H
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

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
