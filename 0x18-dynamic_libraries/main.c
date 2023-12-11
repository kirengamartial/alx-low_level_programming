#include "main.h"

int main(void)
{
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    char buffer[100];

    /* Using various functions from the dynamic library */
    _puts("String 1:");
    _puts(str1);

    _puts("String 2:");
    _puts(str2);

    _puts("Concatenated strings:");
    _strcpy(buffer, str1);
    _strcat(buffer, str2);
    _puts(buffer);

    _puts("Comparison result:");
    _putchar('0' + _strcmp(str1, str2));

    return 0;
}
