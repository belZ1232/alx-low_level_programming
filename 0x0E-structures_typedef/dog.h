
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
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
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

#endif
