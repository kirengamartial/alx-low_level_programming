#include "main.h"

/**
 * generate_password - Generates a random valid password
 * @password: The buffer to store the generated password
 * @length: The length of the password to generate
 *
 * Return: None (the password is stored in the 'password' buffer)
 */
void generate_password(char *password, int length)
{
    int i, random_char;

    for (i = 0; i < length - 1; i++)
    {
        random_char = rand() % 94 + 33; /* ASCII characters from '!' to '~' */
        password[i] = (char)random_char;
    }

    password[length - 1] = '\0';
}
