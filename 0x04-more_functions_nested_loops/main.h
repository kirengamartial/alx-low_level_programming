#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - Checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
int _putchar(char c);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void fizz_buzz(void);
void print_triangle(int size);
void print_number(int n);

#endif /* MAIN_H */
