#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * reset_to_98 - updates the value of a pointer to 98
 * swap_int - swaps the values of two int
 * _strlen - returns the length of a string
 * _puts - prints a string followed by a new line to stdout
 * print_rev - prints a string in reverse
 * rev_string - reverses a string
 * puts2 - prints every other character of a string
 * puts_half - prints second half of a string
 * print_array - prints n elements of an array of integers
 * *_strcpy - copies string
 */
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
