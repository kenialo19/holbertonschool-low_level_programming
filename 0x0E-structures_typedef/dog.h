#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: dog information
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
#endif /*  _DOG_H */
