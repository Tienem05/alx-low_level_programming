#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;


} my_dog;

int _putchar(char c);
void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_H */

