#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * _isupper - checks if char is uppercase
 * _isdigit - checkd if c is a digit
 * mul - multiplies two numbers and return the result
 * print_numbers - print numbers from 0 - 9 to stdout
 * print_most_numbers - print 0-9 except 2 & 4
 * more_numbers - print 1 - 14 to stdout 10 times
 * print_line - print lines nth times
 * print_diagonal - print diagonal lines
 * print_square - print squares according to size
 * print_triangle -print triangles according to size
 * print_number - prints an integer
 */
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
