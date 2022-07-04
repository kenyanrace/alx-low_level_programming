#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - mkij
 * @str: kjhgvb
 * Return: 0
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - iuhgjkl
 * @dest: kjhgbnkl
 * @src: uyghiuytghjiuytghjuy
 * Return: ytghiuojuhygtfcvhjiuhygf
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - ijuhjfj
 * @name: diuyhjk
 * @age: yhgujh
 * @owner: hjuhg
 * Return: jxjk
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doug;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doug = malloc(sizeof(dog_t));
	if (doug == NULL)
		return (NULL);
	doug->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doug->owner == NULL)
	{
		free(doug->name);
		free(doug);
		return (NULL);
	}
	doug->name = _strcopy(doug->name, name);
	doug->age = age;
	doug->owner = _strcopy(doug->owner, owner);
	return (doug);
}
