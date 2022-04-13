#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

int _putchar(char c);
int _strlen(char *str);
char *_strcpy(char *src, char *dest);
void print_name(char *name, void (*f)(char *));

#endif
