#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Dog Struct
 *@name: name of doge
 *@age: age of doge
 *@owner: owner of doge
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
