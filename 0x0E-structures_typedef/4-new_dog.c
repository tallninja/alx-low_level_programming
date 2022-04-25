#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _strcpy - copies the contents of a string to
 * another string
 * @src: the string source
 * @dest: the destination string
 * Return: copy of the string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i]; /* copies the null byte \0 */

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	if (name != NULL)
	{
		dog_name = malloc(sizeof(char) * _strlen(name) + 1);
		if (dog_name == NULL)
		{
			free(dog_name);
			return (NULL);
		}

		dog->name = _strcpy(name, dog_name);
	}
	else
		dog->name = NULL;

	if (owner != NULL)
	{
		dog_owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (dog_owner == NULL)
		{
			free(dog_name);
			free(dog);
			return (NULL);
		}

		dog->owner = _strcpy(owner, dog_owner);
	}
	else
		dog->owner = NULL;

	return (dog);
}
