#ifndef _function_pointers_h_
#define _function_pointers_h_

/*
 * Structs, enums and unions definition
 * Typedefs
 * Function prototypes
 */
#include <string.h>
int _putchar(char);
void print_name(char *name, void (f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));




#endif /*_function_pointers_h_*/
