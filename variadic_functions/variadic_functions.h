#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_element - Structure associating a format id with a printer
 * @id: Character identifying the data type to print
 * @f: Function pointer to the printing function for this type
 *
 * Description: This structure is used by print_all to map format specifiers
 * to the corresponding printing functions that handle each argument type.
 */
typedef struct print_element
{
	char id;
	void (*f)(va_list);
} print_element;

/**
 * sum_them_all - Sums all parameters passed to the function
 * @n: Number of arguments
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
