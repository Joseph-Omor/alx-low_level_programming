#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct my_struct - Structure to map format characters to processing functions 
 * @format: format specifier
 * @printer: function pointer
 */
typedef struct fp{
	char format;
	void (*printer)(va_list);
} FormatPrinter;

/* Function prototypes for processing different format characters */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);




int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
