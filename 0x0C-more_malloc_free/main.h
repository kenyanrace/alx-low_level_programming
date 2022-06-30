#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *strin_nconcat(char *s1, char *s2, unsigned int n);
void *calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *realloc(vioid *ptr, umsigned int old_size, unsigned int new_size);

#endif
