#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *memalloc(int memspace);
char *add(char *str1, char *str2, int len);
int len(char *str);
char *initialize_zero(char *array, int len);
char *mul(char argc, char *argv[]);
char *rmleadingzero(char *result, int strlen, int i);
void printstr(char *str);
int _putchar(char);


#endif /* main.h */
