/*struct dog - struct of a dog
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct
 */

typedef struct dog dog_t;

