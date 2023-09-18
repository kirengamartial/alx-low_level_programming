#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[100];
    
    srand(time(0));
    generate_password(password, 12); /* Adjust the length as needed */
    printf("%s\n", password);
    
    return (0);
}
