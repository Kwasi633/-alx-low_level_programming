#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog's info
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: No description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog__t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
